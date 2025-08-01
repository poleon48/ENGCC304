#include <stdio.h>

int main() {
    int n, i;

    printf("กรุณากรอกตัวเลขจำนวนเต็ม: ");
    scanf("%d", &n);

    // ตรวจสอบว่าเป็นเลขคี่หรือไม่
    if (n % 2 != 0) {
        printf("กรอกเลขคี่ โปรแกรมจะแสดงตัวเลขคี่จาก 1 ถึง %d:\n", n);
        for (i = 1; i <= n; i += 2) {
            printf("%d ", i);
        }
    } 
    // เป็นเลขคู่
    else {
        printf("กรอกเลขคู่ โปรแกรมจะแสดงตัวเลขคู่จาก %d ถึง 0:\n", n);
        for (i = n; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    printf("\n"); 
    return 0;
}