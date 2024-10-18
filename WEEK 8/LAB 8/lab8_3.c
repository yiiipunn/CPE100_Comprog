//67070503437 Phurithip Paisanworajit
#include <stdio.h>

void dec2bin(int n) {
    if (n < 0) {
        printf("-");
        n = -n;
    }
    
    if (n == 0) {
        printf("0");
        return;
    }

    
    int binary[32];
    int index = 0;

    
    while (n > 0) {
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < -1000 || n > 1000) {
        printf("Input must be between -1000 and 1000.\n");
    } else {
        printf("%d", n);
        dec2bin(n);
        printf("\n");
    }

    return 0;
}
