#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char maiorpalavra[100];
    char palavra[100];
    char nor[100];
    int i, j;
    int tamo = 0;
    int maior = 0;

    printf("Digite algo: ");
    scanf("%99[^\n]", str);

    for (i = 0, j = 0; str[i] != '\0'; i++) {
    	
        if (str[i] != ' ') {
            palavra[j] = str[i];
            j++;
        } else {
            palavra[j] = '\0';
            j = 0;

            if (strlen(palavra) > maior) {
                maior = strlen(palavra);
                strcpy(maiorpalavra, palavra);
            }
        }
    }

    palavra[j] = '\0';
    
    for (i=0,j=0 ; i<strlen(str) ; i++) {
		if (str[i]!=' ') {
			nor[j] = str[i];
			j++;
		}
	}
    nor[j] = '\0';
    
    if (strlen(palavra) > maior) {
        maior = strlen(palavra);
        strcpy(maiorpalavra, palavra);
    }

	printf("A sring normalizada fica: \"%s\"\n",nor);
    printf("A maior palavra na string é: \"%s\"\n", maiorpalavra);
	
    return 0;
}

