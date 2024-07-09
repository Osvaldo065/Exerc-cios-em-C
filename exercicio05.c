#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    int i;  
    for (i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char palavra[] = "aigrenis";
    
    printf("Palavra original: %s\n", palavra);
    
    
    reverseString(palavra);
    
    printf("Palavra invertida: %s\n", palavra);
    
    return 0;
}
