//Phurithip Paisanworajit 67070503437
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("The input is invalid");
        return 1;
    }

    int middle_size = (n % 2 == 0) ? 2 : 1;

    for (int i = n; i > middle_size; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

   
    for (int i = 0; i < middle_size; i++) {
        for (int j = 0; j < (n - middle_size) / 2; j++) {
            printf(" ");
        }
        
        for (int k = 0; k < middle_size; k++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = middle_size + 2; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }
        
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}