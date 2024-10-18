//Phurithip Paisanworajit 6707050347
#include <stdio.h>
#include <string.h> 

int main() {
    char str[101];  
    int i, v = 0, con = 0;

    scanf("%s", str);

    int size = strlen(str);

    for (i = 0; i < size; i++) {
        char ch = str[i];

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            v++;
        }
        
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            con++;
        }
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", con);

    return 0;
}
