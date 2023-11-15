#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float Nsem, biUm, biDois, p1, p2, p3, p4;
	
	printf("Digite a nota da primeira prova: \n");
	scanf("%f", &p1);
	
	printf("Digite a nota da segunda prova: \n");
	scanf("%f", &p2);
	
	biUm = (p1+p2)/2;
	printf("A primeira nota bimestral desse aluno foi %.2f\n", biUm);
	
	printf("Digite a nota da terceira prova: \n");
	scanf("%f", &p3);
	
	printf("Digite a nota da quarta prova: \n");
	scanf("%f", &p4);
	
	biDois = (p3+p4)/2;
	printf("A segunda nota bimestral desse aluno foi %.2f\n", biDois);
	
	Nsem = (biUm+biDois)/2;
	printf("A nota semestral desse aluno foi %.2f\n", Nsem);
	
	return 0;
}
