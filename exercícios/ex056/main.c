#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i, soma;
	
	i = soma = 0;
	
	printf("Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores \n");
	printf("próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o próprio N.\n");
	printf("Esse programa verivica se um número é perfeito!\n");
	printf("Digite um número para verificação: \n");
	scanf("%d",&n);
	
 	for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

	if (soma==n) {
		printf("%d é um número perfeito!\n");
	} else {
		printf("%d não é um número perfeito.\n");
	}
	
	
	return 0;
}
