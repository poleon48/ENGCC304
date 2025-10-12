#include <stdio.h>

// โครงสร้างข้อมูลนักเรียน
struct Student {
    char name[50];
    int id;
    float score[5];
};

// ฟังก์ชันตัดเกรด
char grade(float score) {
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    struct Student students[3];
    int i, j;

    // รับข้อมูลนักเรียน 3 คน
    for (i = 0; i < 3; i++) {
        printf("\n=== Student %d ===\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        for (j = 0; j < 5; j++) {
            printf("Enter score for subject %d: ", j + 1);
            scanf("%f", &students[i].score[j]);
        }
    }

    // แสดงผลลัพธ์
    printf("\n==============================\n");
    printf("        Grade Report\n");
    printf("==============================\n");

    for (i = 0; i < 3; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("ID  : %d\n", students[i].id);

        for (j = 0; j < 5; j++) {
            printf("Subject %d: %.2f -> Grade %c\n", j + 1,
                   students[i].score[j],
                   grade(students[i].score[j]));
        }
    }

    return 0;
}
