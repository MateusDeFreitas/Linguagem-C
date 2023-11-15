#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool Palindromo(const char *str) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    char palavra[100];
    char normalizada[100];
    int i, j = 0;

    printf("Digite uma palavra ou frase: ");
    scanf(" %99[^\n]", palavra);
    
    for (i=0 ; i<strlen(palavra) ; i++) {
    	if (palavra[i]!=' ') {
    		normalizada[j] = palavra[i];
    		j++;
		}
	}

    if (Palindromo(normalizada)) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

    return 0;
}

