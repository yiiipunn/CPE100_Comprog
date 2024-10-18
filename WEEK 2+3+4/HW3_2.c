//Phurithip Paisanworajit 67070503437
#include<stdio.h>
int main(){
    float score;
    scanf("%f",&score);
    if (score>=90 && score<=100){
        printf("A");
    }
    else if (score>=85 && score<=89){
        printf("B+");
    }
    else if (score>=80 && score<=84){
        printf("B");
    }
    else if (score>=75 && score<=79){
        printf("C+");
    }
     else if (score>=70 && score<=74){
        printf("C");
    }
    else if (score>=65 && score<=69){
        printf("D+");
    }
     else if (score>=60 && score<=64){
        printf("D");
    }
    else if (score<60 && score>=0){
        printf("F");
    }

    else {
        printf("Invalid score!");
    }
}