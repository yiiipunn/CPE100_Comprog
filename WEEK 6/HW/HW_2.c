//Phurithip Paisanworajit 67070503437
#include <stdio.h>

void findMostFreq(int arr[], int n) {
    if (n <= 0) {
        printf("Array is empty");
        return;
    }

    int freq[101] = {0}; 
    int maxFreq = 0;

  
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
        }
    }

    int count = 0;
    for (int i = 0; i < 101; i++) {
        if (freq[i] == maxFreq) {
            count++;
        }
    }

    if (count == 1) {
        printf("Most frequent value: ");
    } else {
        printf("Most frequent values: ");
    }

    for (int i = 0; i < 101; i++) {
        if (freq[i] == maxFreq) {
            printf("%d ", i);
        }
    }
    printf("\nFrequency: %d", maxFreq);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty");
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMostFreq(arr, n);

    return 0;
}

