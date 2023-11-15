#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char str[100];
	char str2[100];
	int i, j;
	
	printf("Escreva um programa em C, que dado uma string, crie uma nova string contendo na\nordem em que aparecem no string dado, as vogais no começo e as consoantes no final.\n");
	printf("\n");
	
	printf("Digite alguma coisa: ");
	scanf("%99[^\n]", str);
	
    for (i = 0, j = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
        	
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                	
                str2[j] = str[i];
                j++;
            }
            
        }
    }
	
for (i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
        	
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
                str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
                	
                str2[j] = str[i];
                j++;
            }
            
        }
    }
		
	printf("Resultado: %s\n",str2);	
	
	
	return 0;
}
