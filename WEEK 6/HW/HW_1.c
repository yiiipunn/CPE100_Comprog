//Phurithip Paisanworajit 67070503437
#include <stdio.h>

void moveZERO(int arr[], int n, int mode) {
    int count = 0;

    if (mode == 2) {
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[count++] = arr[i];
            }
        }
        while (count < n) {
            arr[count++] = 0;
        }
    } 
    else if (mode == 1) {
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] != 0) {
                arr[--n] = arr[i];
            }
        }
        while (n > 0) {
            arr[--n] = 0;
        }
    }
}

int main() {
    int n, mode;
    scanf("%d", &n);

    int arr[n];

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    scanf("%d", &mode);

    moveZERO(arr, n, mode);

    
    printf("Modified Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
