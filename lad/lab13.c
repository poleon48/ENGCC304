#include <stdio.h>

// ฟังก์ชันสลับค่าตัวเลขโดยใช้ Pointer และห้ามใช้ตัวแปรพักค่า
void swapNumbers(int *a, int *b) {
    // สลับค่าโดยใช้การบวก/ลบ (ไม่ใช้ตัวแปรพักค่า)
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // เรียกใช้ฟังก์ชันเพื่อสลับค่า
    swapNumbers(ptr1, ptr2);

    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
