//67070503437 Phurithip Paisanworajit
#include <stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int sum(int a, int b) { 
    int result = 0;
    if (a > b) {
        swap(&a, &b); 
    }
    for (int x=a; x <= b; x++) {
        result = result + x;
    }
    return result;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",sum(x, y));
    puts("");
}

