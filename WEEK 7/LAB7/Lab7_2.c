//67070503437 Phurithip Paisanworajit
#include<stdio.h>
int sum_div(int start, int end,int div){
 int sum = 0;
 for(int i = start; i<=end ;i++){
    if(i % div == 0){
        sum += i;
    }
    return sum;
 }
}
int main(){
    int start,end,div;
    scanf("%d\n",&start);
    scanf("%d\n",&end);
    scanf("%d\n",&div);
    int result = sum_div(start,end,div);

    printf("%d\n",result);
}