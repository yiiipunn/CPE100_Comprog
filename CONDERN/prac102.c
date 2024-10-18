#include <stdio.h>

int main() {
    int input, c= 1;

    
    scanf("%d", &input);
    for (int i = 0; i < input; i++) {
        
        for (int s = 1; s <= input - i; s++) {
            printf("  ");
        }

        
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;

       
            printf(" %d  ", c);
        }
     
        printf("\n");
    }

    return 0;
}