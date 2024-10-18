#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
    
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        for (char letter = 'a', j = 0; j <= i; j++, letter++) {
            printf("%c ", letter);
        }

        for (char letter = 'a' + i - 1; letter >= 'a'; letter--) {
            printf("%c ", letter);
        }

        printf("\n");
    }

    return 0;
}
