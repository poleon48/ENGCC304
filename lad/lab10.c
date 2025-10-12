#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[100];
    char clean[100];
    int i, j, len, isPalindrome = 1;

    printf("Enter a word or phrase: ");
    fgets(text, sizeof(text), stdin);

    // เอาอักขระที่ไม่ใช่ตัวอักษรออก และแปลงเป็นตัวพิมพ์เล็กทั้งหมด
    j = 0;
    for (i = 0; text[i] != '\0'; i++) {
        if (isalnum(text[i])) { // ตรวจเฉพาะตัวอักษรและตัวเลข
            clean[j++] = tolower(text[i]);
        }
    }
    clean[j] = '\0';

    // ตรวจสอบ palindrome
    len = strlen(clean);
    for (i = 0; i < len / 2; i++) {
        if (clean[i] != clean[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Pass\n");
    else
        printf("Not Pass\n");

    return 0;
}
