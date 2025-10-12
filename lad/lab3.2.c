#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    int arr[100]; 

    printf("Enter N (number of elements, max 100): ");
    
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input for N. Exiting program.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }


    printf("\nIndex:  ");
    for (int i = 0; i < n; i++) {
        printf("%4d", i);
    }
    printf("\n");

    printf("Array:  ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%4d", arr[i]);
        } else {
            printf("%4s", "#"); 
        }
    }
    printf("\n");
    
    return 0;
}