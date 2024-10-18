//Phurithip Paisanworajit 6707050347
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n<=0){
        printf("Invalid Input");
        return 1;
    }

    int array[n];
    for (int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    puts("");
    
    printf("Reversed Array: ");
    for (int i = n - 1; i >= 0; i--){
        printf("%d ", array[i]);
    }

    return 0;
}