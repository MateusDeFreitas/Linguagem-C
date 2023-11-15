#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int saque, n100, n50, n20, n10, n5, n2, n1;
	
	n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;
	
	printf("Digite o valor desejado para sacar: ");
	scanf("%d",&saque);
	
	while (saque>0) {
		if (saque >= 100) {
			saque -= 100;
			n100 += 1;
		} else if (saque >= 50) {
			saque -= 50;
			n50 += 1; 
		} else if (saque >= 20) {
			saque -= 20;
			n20 += 1;
		} else if (saque >= 10) {
			saque -= 10;
			n10 += 1;
		} else if (saque >= 5) {
			saque -= 5;
			n5 += 1;
		} else if (saque >= 2) {
			saque -= 2;
			n2 += 1;
		} else if (saque >= 1) {
			saque -= 1;
			n1 += 1;
		}
	}
	
	printf("para sacar o valor %d foi necessário \n",saque);
	printf("%d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d notas de 1",n100, n50, n20, n10, n5, n2, n1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
