#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	
	int prox = num+1;
	printf("O numero sucessor � %d � %d",num , prox);
	
	return 0;
}
