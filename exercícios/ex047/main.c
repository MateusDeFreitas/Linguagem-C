#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int A, B;
	
	printf("Digite o valor do dividendo (A): \n");
	scanf("%d",&A);
	printf("Digite o valor do divisor (B): \n");
	scanf("%d",&B);
	
	
	if (B==0) {
		printf("[ERRO] n�o � possivel realizar divis�es por zero.\n");
	} else {
		while (A>=B) {
			A-=B;
		}
		printf("O resto da divis�o � %d.\n",A);
	}
	

	
	
	return 0;
}
