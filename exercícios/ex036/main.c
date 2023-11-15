#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float I,II,III,IV,V;
	
	printf("Digite as notas  dos exames de I até V em ordem: \n");
	scanf("%f",&I);
	scanf("%f",&II);
	scanf("%f",&III);
	scanf("%f",&IV);
	scanf("%f",&V);
	
	if (I>=70 && II>=70 && III>=70 && IV>=70 && V>=70) {
		printf("Aluno aprovado com nota de classificação A\n");
	} else if ((I>=70 && II>=70 && IV>=70) && (III>=70 || V>=70)) {
		printf("Aluno aprovado com nota de classificação B\n");
	} else if ((I>=70 && II>=70 && V<70) && (III>=70 || IV>=70)) {
		printf("Aluno aprovado com nota de classificação C\n");
	} else {
		printf("Aluno reprovado\n");
	}
	
	
	return 0;
}
