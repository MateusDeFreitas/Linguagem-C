#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, n4, n5;
	
	printf("Digite o 5 n�meros em sequ�ncia: \n");
	scanf("%f",&n1);
	scanf("%f",&n2);	
	scanf("%f",&n3);	
	scanf("%f",&n4);		
	scanf("%f",&n5);
	
	float media = (n1+n2+n3+n4+n5)/5;
	
	printf("A m�dia desses 5 n�meros � %.2f\n",media);
	
	
	return 0;
}
