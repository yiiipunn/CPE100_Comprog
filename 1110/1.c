#include<stdio.h>
void swap(int *x, int *y ){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int sum(int a, int b){
    int result =0;
    if(a>b){
        swap(a,b);
    }
    for(int x=a;x<=b;x++){
        result =result+x;
    }
    return result;
}
int main(){
    int x=10,y=20,z=100;
    printf("Summation from %d to %d is %d",x,y,sum(x,y));
    puts("");
}