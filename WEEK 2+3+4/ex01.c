#include<stdio.h>
int main(){
    int p,q;
    int t=1 , f=0;
    scanf("%d",&p);
    scanf("%d",&q);
    if(p==1 && q ==1){
        printf("T");
    }
    if(p==1 && q ==0){
        printf("F");
    }

    if(p==0 && q ==1){
        printf("F");
    } 
    if(p==0 && q ==0){
        printf("F");
    }
}