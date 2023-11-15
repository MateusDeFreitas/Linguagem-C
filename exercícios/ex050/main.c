#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	int d1;
	int d2;
	int cont = 1;
	
	printf("Este programa imprime todas as poss�veis combina��es em que o lan�amento de \num par de dados tenha como resultado da soma dos valores dos dados o n�mero lido.\n");
	printf("\nDigite um n�mero: \n");
	scanf("%d",&num);
	
	printf("As combina��es poss�veis s�o: \n");
	
	if (num>12) {
		printf("[ERRO] O n�mero n�o pode ser maior que 12.\n");
	} else if (num<2) {
		printf("[ERRO] O n�mero n�o pode ser menor que 2.\n");
	} else if (num>6) {
		d1 = 1;
		d2 = 6;
		while (d1<=6) {
			if (d1+d2==num) {
				printf("%d-	%d, %d\n",cont,d1,d2);
				d2--;
				cont++;
			}
			else {
				d1++;
			}
		}
	} else {
		d1 = 6;
		d2 = 1;
		while (d1>=1) {
			if (d1+d2==num) {
				printf("%d-	%d, %d\n",cont,d1,d2);
				d2++;
				cont++;
			} else {
				d1--;
			}
		}
	}
	
	return 0;
}
