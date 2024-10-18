//Phurithip Paisanworajit 67070503437
#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);

    for (int i = 0; i < h; i++) {

        for (char alpha = 'a', j = 0; j <= i; j++,alpha++) {
            printf("%c ", alpha+i+j);
        }

        printf("\n");
    }

    return 0;
}