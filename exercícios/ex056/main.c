#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i, soma;
	
	i = soma = 0;
	
	printf("Um n�mero se diz perfeito se � igual � soma de seus divisores pr�prios. Divisores \n");
	printf("pr�prios de um n�mero positivo N s�o todos os divisores inteiros positivos de N exceto o pr�prio N.\n");
	printf("Esse programa verivica se um n�mero � perfeito!\n");
	printf("Digite um n�mero para verifica��o: \n");
	scanf("%d",&n);
	
 	for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

	if (soma==n) {
		printf("%d � um n�mero perfeito!\n");
	} else {
		printf("%d n�o � um n�mero perfeito.\n");
	}
	
	
	return 0;
}
