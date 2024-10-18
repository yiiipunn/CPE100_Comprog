//Phurithip Paisanworajit 67070503437
#include<stdio.h>
int main(){
    int row,col;
    long long int fact = 1,factR,factC;
    int sum;

    scanf("%d %d",&row,&col);
    if(row<=1){
        for(int i=1;i<=row;i++){
            fact*=1;
            scanf("%lld",&factR);
        }
     if(col<=1){
        for(int i=1;i<=col;i++){
            fact*=1;
            scanf("%lld",&factC);
        }

        if(row == 0){
            fact = row+1;
            scanf("lld",&factR);
        }
        if(col == 0){
            fact = col+1;
            scanf("%lld",&factC);
        }
        sum = factR+factC;
        if((sum%2!=0||sum%3!=0||sum%5!=0||sum%7!=0||sum%11!=0)&&(sum%1==0 && sum%sum==0)){
            printf("-%d",sum);
        }
        else{
            printf("%d",sum);
        }
    }
}
    return 0;
}