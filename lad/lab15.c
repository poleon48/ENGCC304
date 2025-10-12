#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int countWordsInFile(const char *filename) {
    FILE *file;
    int wordCount = 0;
    int isInsideWord = 0;
    int character;

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("เกิดข้อผิดพลาด: ไม่สามารถเปิดไฟล์ '%s' ได้\n", filename);
        return -1;
    }

    while ((character = fgetc(file)) != EOF) {
        
        if (isspace(character) || character == ',' || character == '.') {
            isInsideWord = 0;
        } else {
            if (isInsideWord == 0) {
                wordCount++;
                isInsideWord = 1; 
            }
        }
    }

    fclose(file);

    return wordCount;
}

int main() {
    char fileName[100];
    int totalWords;

    printf("Enter file name: ");
    if (scanf("%99s", fileName) != 1) {
        fprintf(stderr, "เกิดข้อผิดพลาดในการรับชื่อไฟล์\n");
        return 1;
    }

    totalWords = countWordsInFile(fileName);

    if (totalWords >= 0) {
        printf("Total number of words in '%s' : %d words\n", fileName, totalWords);
    } else {
    }

    return 0;
}
