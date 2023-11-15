#include <stdio.h>
#include <string.h>

// esse exerc�cio (83) tem o enunciado identico ao do exerc�cio 79 !!!

int main() {
    char original[100];
    int posinicial, posfinal;

	printf("Digite a string original: ");
    scanf("%99s", original);

    printf("Digite a posi��o inicial da substring: ");
    scanf("%d", &posinicial);

    printf("Digite a posi��o final da substring: ");
    scanf("%d", &posfinal);

	char sub[100];
	int j, i;

    if (posinicial < 0 || posinicial >= strlen(original) || posfinal < posinicial || posfinal >= strlen(original)) {
    	printf("[ERRO] Posi��o inicial ou final invalida!\n");
	} else {
		for(i = posinicial, j = 0; i <= posfinal; i++, j++) {
			sub[j] = original[i];
		}
	}
	
	sub[j] = '\0';
	
	printf("A substring e: \"%s\"\n", sub);
	
    return 0;
}

