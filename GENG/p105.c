//fibonacci
#include<stdio.h>
int main(){
    int i,num,next;
    scanf("%i",&num);
    
    int a = 0 , b=1;
    for(i=0;i<num;i++){
    next = a+b;
    a = b;
    b = next;
    }
    return 0;
}