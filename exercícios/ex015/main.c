#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float Altura, Sombra, sPredio, altPredio;


    printf("Digite sua altura (em metros): \n");
    scanf("%f", &Altura);
    
    printf("Digite o comprimento da sua sombra (em metros): \n");
    scanf("%f", &Sombra);
    
    printf("Digite o comprimento da sombra do prédio (em metros): \n");
    scanf("%f", &sPredio);


    altPredio = (Altura * sPredio) / Sombra;


    printf("A altura do predio é: %.2f metros\n", altPredio);

	
	return 0;
}
