#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float n1, n2, n3, s1, s2;
	
	printf("Digite um valor: ");
	scanf("%f",&n1);
	printf("Digite outro valor: ");
	scanf("%f",&n2);
	printf("Digite um terceiro valor: ");
	scanf("%f",&n3);
	
	if (n1>n2) {
		s1 = n1;
	} else {
	s1 = n2;} 
	
	
	
	
	if (n1==s1) {
		if (n2>n3) {
			s2 = n2;
		} else {
			s2 = n3;
		}
	} else {
		if (n1>n3) {
			s2 = n1;
		} else {
			s2 = n3;
		}
	}
	
	float soma = s1+s2;
	
	printf("A soma dos dois maiores números é %.2f",soma);
	return 0;
}
