//67070503437 Phurithip Paisanworajit
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char compressed[200];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int length = strlen(input);
    int j = 0;

    for (int i = 0; i < length; i++) {
        int count = 1;

        while (i < length - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        
        j += sprintf(&compressed[j], "%c%d", input[i], count);
    }
    
    compressed[j] = '\0';

    if (j < length) {
        printf("Compressed string: %s\n", compressed);
    } else {
        printf("Original string: %s\n", input);
    }

    return 0;
}
