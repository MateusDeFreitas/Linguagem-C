#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n1, n2, n3;
	
	printf("Didite um valor inteiro: ");
	scanf("%d",&n1);
	printf("Didite outro valor inteiro: ");
	scanf("%d",&n2);	
	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	printf("Após a troca os valores são: \n");
	printf("Primeiro valor: %d\n", n1);
	printf("segundo valor: %d\n", n2);	
	
	
	
	
	
	return 0;
}
