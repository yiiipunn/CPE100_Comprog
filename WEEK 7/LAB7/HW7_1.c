//67070503437 Phurithip Paisanworajit
#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int originalNum, remainder, sum = 0;
    int digits = 0;

   
    if (num < 0) {
        printf("Armstrong Number cannot be negative\n");
        return 0;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

   
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

   
    if (sum == num)
        return 1;  
    else
        return 0;  
}

int main() {
    int num;
    
   
    scanf("%d", &num);
    
   
    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else if (num >= 0)
        printf("%d is not an Armstrong number\n", num);

    return 0;
}