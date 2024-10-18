#include <stdio.h>

int main() {
    float price, discount = 0, finalPrice, netPrice;
    int hasPromotion, Type;

   
   
    scanf("%f", &price);

   
    if (price <= 0) {
        printf("Price must be positive\n");
        return 1;
    }

    scanf("%d", &hasPromotion);
    scanf("%d", &Type);

    // Validate  type
    if (Type < 1 || Type > 3) {
        printf(" type out of range\n");
        return 1;
    }

    
    if (hasPromotion) {
        switch (Type) {
            case 1: 
            case 2: 
                if (price >= 5000) {
                    discount = 0.25; 
                } else if (price >= 2000) {
                    discount = 0.15;
                } else {
                    discount = 0.10; 
                }
                break;
            case 3: 
                if (price >= 5000) {
                    discount = 0.20; 
                } else if (price >= 2000) {
                    discount = 0.10; 
                } else {
                    discount = 0.05; 
                }
                break;
        }
    }

    
    finalPrice = price - (price * discount);

    // Apply 7% VAT
    netPrice = finalPrice * 1.07;

    // Output the net price
    printf("Net price after discount and tax: %.2f Baht\n", netPrice);

    return 0;
}
