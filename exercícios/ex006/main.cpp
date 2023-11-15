#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int nu, num, res;
	float div, fnu, fnum, quo, qquo;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&nu);
	
	printf("Digite outro número inteiro: ");
	scanf("%d",&num);
	
	fnu = (float)nu;
	fnum = (float)num;
	
	res = nu%num;
	quo = nu/num;
	qquo = quo-(res/num);
	div = fnu/fnum;
	
	printf("O quociente da divisão desses dois, com virgula, números é %.2f\n", div);
	printf("O quociente da divisão desses dois, sem virgula, números é %.0f\n", qquo);
	printf("O resto da divisão desses dois números é %d", res);	
	

	


	
	return 0;
}
