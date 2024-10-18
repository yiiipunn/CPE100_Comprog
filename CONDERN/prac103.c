#include <stdio.h>

int main() {
    int rows ; 
    char letter;  
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++) {

        for (int space = 1; space <= (rows - i - 1)*2 ; space++) {
            printf(" ");
        }

        letter = 'a';
        for (int j = 0; j <= i; j++) {
            printf("%c ", letter++);
        }

       
        letter -= 2; 
        for (int j = 0; j < i; j++) {
            printf("%c ", letter--);
        }
        printf("\n");
    }

    return 0;
}