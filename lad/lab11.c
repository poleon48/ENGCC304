#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบว่าเป็นตัวเลขอาร์มสตรองหรือไม่
int isArmstrong(int n) {
    int original = n;
    int sum = 0, digits = 0, temp, remainder;

    // หาจำนวนหลักของตัวเลข
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // คำนวณผลรวมของเลขยกกำลังของแต่ละหลัก
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // ถ้าผลรวมเท่ากับตัวเลขเดิม แสดงว่าเป็นอาร์มสตรอง
    if (sum == original)
        return 1;  // ใช่
    else
        return 0;  // ไม่ใช่
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("Pass\n");
    else
        printf("Not Pass\n");

    return 0;
}
