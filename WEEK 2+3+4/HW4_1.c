//Phurithip Paisanworajit 67070503437
#include <stdio.h>

int main() {
    int option;
    float balance , amount;

    while (1) {
       
        scanf("%d", &option);
        
        switch (option) {
            case 1:
               
                printf("Balance: %.2f Baht\n", balance);
                break;

            case 2:
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid deposit amount!\n");
                } else {
                    balance += amount;
                    printf("Balance: %.2f Baht\n", balance);
                }
                break;

            case 3:
               
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid withdrawal amount!\n");
                } else if (amount > balance) {
                    printf("Insufficient funds!\n");
                } else {
                    balance -= amount;
                    printf("Balance: %.2f Baht\n", balance);
                }
                break;

            case 4:
              
                printf("Exiting program...\n");
                return 0;

            default:
              
                printf("Invalid option!\n");
                break;
        }
    }

    return 0;
}