#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int nu, num, res;
	float div, fnu, fnum, quo, qquo;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&nu);
	
	printf("Digite outro n�mero inteiro: ");
	scanf("%d",&num);
	
	fnu = (float)nu;
	fnum = (float)num;
	
	res = nu%num;
	quo = nu/num;
	qquo = quo-(res/num);
	div = fnu/fnum;
	
	printf("O quociente da divis�o desses dois, com virgula, n�meros � %.2f\n", div);
	printf("O quociente da divis�o desses dois, sem virgula, n�meros � %.0f\n", qquo);
	printf("O resto da divis�o desses dois n�meros � %d", res);	
	

	


	
	return 0;
}
