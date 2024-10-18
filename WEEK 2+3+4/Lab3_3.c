//Phurithip Paisanworajit 67070503437
#include <stdio.h>

int main() {
    float grossS, taxRate, net, bonus;
    int Rating;
    scanf("%f", &grossS);
  
    if (grossS <= 0) {
        printf("Gross salary must be positive\n");
        return 1;
    }

    
    
    scanf("%f", &taxRate);
    if (taxRate < 0 || taxRate > 100) {
        printf("Tax rate out of range\n");
        return 1;
    }

    scanf("%d", &Rating);
    
    if (Rating < 1 || Rating > 5) {
        printf("Performance rating out of range\n");
        return 1;
    }

    
    if (Rating == 5) {
        bonus = 0.20 * grossS;
    } else if (Rating == 4) {
        bonus = 0.10 * grossS;
    } else if (Rating == 3) {
        bonus = 0.05 * grossS;
    }

    net = grossS - (grossS * (taxRate / 100)) + bonus;

   
    printf("%.2f\n", net);

    return 0;
}
