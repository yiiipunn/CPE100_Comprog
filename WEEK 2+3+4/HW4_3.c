//Phurithip Paisanworajit 67070503437
#include <stdio.h>

int main() {
    int start, end, sum = 0, prime, i, c3;

  
    scanf("%d", &start);
    scanf("%d", &end);

   
    for (i = start; i <= end; i++) {
    
        prime = 1;

        if (i <= 1) {
            prime = 0; 
        }

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0; 
                break;
            }
        }

        int temp = i;
        c3 = 0;
        while (temp > 0) {
            if (temp % 10 == 3) {
                c3 = 1;  
                break;
            }
            temp /= 10;
        }

        
        if (prime && !c3) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}