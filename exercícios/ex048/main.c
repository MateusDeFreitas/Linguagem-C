#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, div, ndiv;
	
	div = 1;
	ndiv = 0;
	
	printf("Digite um n�mero para verificar se ele � primo: \n");
	scanf("%d",&num);
	
	while (num>=div) {
		if (num%div==0) {
			ndiv++;
		}
		div++;
	}
	
	if (ndiv==2) {
		printf("%d � primo!\n",num);
	} else {
		printf("%d n�o � primo.\n",num);
	}
	
	
	// O enunciado do exerc�cio 48 � igual ao do 49!!!
	
	
	return 0;
}
