//Phurithip Paisanworajit 67070503437
#include <stdio.h>

int main(){
    int num, price;
    float pay;
    scanf("%d", &num);
    scanf("%f", &pay);

    if(num == 1){
        float price = 7;
        if(pay == price){
            printf("Dispensing your drink: Water\n");
            printf("No change");
        }
        else if(pay < price){
            printf("Insufficient funds");

        }
        else{
            printf("Dispensing your drink: Water\n");
            printf("Here is your change: %.2f", pay-price);
        }

    }
    else if(num == 2){
        float price = 13;
        if(pay == price){
            printf("Dispensing your drink: Soda\n");
            printf("No change");
        }
        else if(pay < price){
            printf("Insufficient funds");

        }
        else{
            printf("Dispensing your drink: Soda\n");
            printf("Here is your change: %.2f", pay-price);
        }

    }
    else if(num == 3){
        float price = 20;
        if(pay == price){
            printf("Dispensing your drink: Juice\n");
            printf("No change");
        }
        else if(pay < price){
            printf("Insufficient funds");
        }
        else{
            printf("Dispensing your drink: Juice\n");
            printf("Here is your change: %.2f", pay-price);
        }

    }
    else{
        printf("Invalid choice!");
    }


}