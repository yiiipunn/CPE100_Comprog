//Phurithip Paisanworajit 67070503437
#include<stdio.h>
int main() {
    int input,num = 1 ;
    scanf("%d", &input);
    int sum = 0; 

    

    for (int num = 1; num <= input; num++) {
        sum =0;
        for (int div = 1; div < num; div++) {
            if (num % div == 0) {
                sum += div; 
            }
            
        }

        if (sum == num) {
            printf("%d\n", num); 
        }
        
    }

        if(sum!=num){
          printf("No perfect number.\n");
    }
    
    

    return 0;
}