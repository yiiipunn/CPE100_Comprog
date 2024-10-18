//Phurithip Paisanworajit 67070503437
#include <stdio.h>

int main() {
    int num, a;
    
    
    scanf("%d", &num);
    
    
    scanf("%d", &a);
    
    if (a == 1) {  
        if (num == 0) {
            printf("0");
        } else {
            for (int i = 31; i >= 0; i--) {
                int bit = (num >> i) & 1;
                if (bit || (i == 0 || num >> i)) {
                    printf("%d", bit);
                }
            }
        }
    } 
    else if (a == 2) {  
        if (num == 0) {
            printf("0");
        } else {
            for (int i = 30; i >= 0; i -= 3) {
                int digit = (num >> i) & 7;
                if (digit || (i <= 2 || num >> (i - 2))) {
                    printf("%d", digit);
                }
            }
        }
    } 
    else if (a == 3) {  
        if (num == 0) {
            printf("0");
        } else {
            for (int i = 28; i >= 0; i -= 4) {
                int digit = (num >> i) & 15;
                if (digit || (i <= 3 || num >> (i - 3))) {
                    if (digit < 10) {
                        printf("%d", digit);
                    } else {
                        printf("%c", 'A' + digit - 10);
                    }
                }
            }
        }
    } 
    else {
        printf("Invalid Choice");
    }

    printf("\n");
    return 0;
}