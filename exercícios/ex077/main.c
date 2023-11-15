#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char palavra[100];
	char arvalap[100];
	int i, j;
	
	printf("Digite uma palavra: ");
	scanf("%99s", palavra);


    for (i = strlen(palavra) - 1,j=0 ; i>=0 ; i--,j++) {
        arvalap[j] = palavra[i];
    }	

	arvalap[j] = '\0';

	printf("A palavra \"%s\" invertida fica: \"%s\"\n", palavra, arvalap);
	
	return 0;
}
