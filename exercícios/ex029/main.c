#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sal, des, res;
	
	printf("Digite o salário para à ser descontado: ");
	scanf("%f",&sal);
	
	if (sal*0.11>334.29) {
		des = 334.29;
	} else {
		des = sal*0.11;
	}
	
	res = sal-des;
	
	printf("O desconto é de %.2f \n O salário restante é de %.2f",des,res);
	
	return 0;
}
