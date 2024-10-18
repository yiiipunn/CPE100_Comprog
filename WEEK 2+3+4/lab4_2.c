//Phurithip Paisanworajit 67070503437
#include <stdio.h>
int main() {
    int num, og, rv = 0;
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative value is not considered a palindrome.");
        return 0;
    }

    og = num;  
    for (; num != 0; num /= 10) {
        int rem = num % 10;
        rv = rv * 10 + rem;
    }

    if (og == rv) {
        printf("%d is a palindrome.\n", og);
    } else {
        printf("%d is not a palindrome.\n", og);
    }

    return 0;
}
  

