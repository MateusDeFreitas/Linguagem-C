#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float valorM, parcela1, entrada;
	int par1, par2;
	
	printf("Digite o valor da mercadoria: ");
	scanf("%f",&valorM);
	
	parcela1 = valorM/3;
	
	par1 = (int)parcela1;
	par2 = (int)parcela1;
	
	entrada = valorM-(par1*2);
	
	printf("Valor da entrada: R$ %.2f\n", entrada);
    printf("Valor da primeira prestação: R$ %d\n", par1);
    printf("Valor da segunda prestação: R$ %d\n", par2);
    
    
	return 0;
}
