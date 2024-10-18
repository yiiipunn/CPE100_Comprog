//Phurithip Paisanworajit 67070503437
#include <stdio.h>

int main() {
    float price, final_price, discount = 0.0, vat;
    int promo, prod_type;

    scanf("%f", &price);
    scanf("%d", &promo);
    scanf("%d", &prod_type);

    if (promo == 1) {
        if (prod_type == 1 || prod_type == 2) { 
            if (price >= 5000) {
                discount = 0.25; 
            } else if (price >= 2000) {
                discount = 0.15; 
            } else {
                discount = 0.10; 
            }
        } else if (prod_type == 3) {
            if (price >= 5000) {
                discount = 0.20; 
            } else if (price >= 2000) {
                discount = 0.10; 
            } else {
                discount = 0.05; 
            }
        }
    }

  
    final_price = price * (1 - discount);

    
    vat = 0.07;
    final_price *= (1 + vat);

    
    printf("Net price after discount and tax: %.2f Baht\n", final_price);

    return 0;
}