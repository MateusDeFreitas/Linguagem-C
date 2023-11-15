#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dia;
	
	printf("Digite um número relacionado à um dia da semana: ");
	scanf("%d",&dia);
	
	printf("O dia da semana equivalente à %d é: \n",dia);
	
	switch (dia) {
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Terça-feira");
			break;
		case 4:
			printf("Quarta-feira");
			break;
		case 5:
			printf("Quinta-feira");
			break;
		case 6:
			printf("Sexta-feira");
			break;
		case 7:
			printf("Sabado");
			break;
		default:
			printf("Número inválido.\ntente novamente com um número entre 1 e 7.");
	}	
	
	return 0;
}
