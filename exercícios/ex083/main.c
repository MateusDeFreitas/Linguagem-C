#include <stdio.h>
#include <string.h>

// esse exercício (83) tem o enunciado identico ao do exercício 79 !!!

int main() {
    char original[100];
    int posinicial, posfinal;

	printf("Digite a string original: ");
    scanf("%99s", original);

    printf("Digite a posição inicial da substring: ");
    scanf("%d", &posinicial);

    printf("Digite a posição final da substring: ");
    scanf("%d", &posfinal);

	char sub[100];
	int j, i;

    if (posinicial < 0 || posinicial >= strlen(original) || posfinal < posinicial || posfinal >= strlen(original)) {
    	printf("[ERRO] Posição inicial ou final invalida!\n");
	} else {
		for(i = posinicial, j = 0; i <= posfinal; i++, j++) {
			sub[j] = original[i];
		}
	}
	
	sub[j] = '\0';
	
	printf("A substring e: \"%s\"\n", sub);
	
    return 0;
}

