//Phurithip Paisanworajit 67070503437
#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,r1,r2,differ;
    scanf("%lf %lf %lf", &a,&b,&c);

    
    r1 = ((pow(a,b))+c) / (log10(a)+log(c)) ;
    r2 = ( pow((sqrt(a)+sqrt(b)),2)) / log(c);
    differ = r1-r2;

        printf("Result1 = %.2lf\n",r1);
        printf("Result2 = %.2lf\n",r2);
        printf("Difference between result1 and result2 = %.2lf\n",differ);
    
    if (differ>0){
            printf("Positive");
        }
    if(differ<0){
        printf("Negative");
    }
    if(differ==0){
        printf("Zero");
    }
    
    return 0;
}

