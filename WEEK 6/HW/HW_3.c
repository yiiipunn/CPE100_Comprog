//Phurithip Paisanworajit 67070503437
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};


    scanf("%[^\n]", str1); 
    getchar(); 
    scanf("%[^\n]", str2);  
    int Count1 = 0, Count2 = 0;

 
    for (int i = 0; str1[i] != '\0'; i++) {
        char c = str1[i];
        
        if (c != ' ' && (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')) {
          
            if (c >= 'A' && c <= 'Z') {
                c += 32; 
            }
            count[c]++;
            Count1++; 
        }
    }

    
    for (int i = 0; str2[i] != '\0'; i++) {
        char c = str2[i];
        
        if (c != ' ' && (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')) {
           
            if (c >= 'A' && c <= 'Z') {
                c += 32; 
            }
            count[c]--;
            Count2++; 
        }
    }

   
    if (Count1 !=Count2) {
        printf("The strings are not anagrams");
        return 0; 
    }

 
    int Anagram = 1; 
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            Anagram = 0; 
            break;
        }
    }

    if (Anagram==1) {
        printf("The strings are anagrams");
    } else {
        printf("The strings are not anagrams");
    }

    return 0;
}