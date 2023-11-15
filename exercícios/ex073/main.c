#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calcularModa(int array[], int tamanho) {
    int moda = 0;
    int contagemModa = 0;
    int contagemAtual = 1;
    int i;

    for (i = 1; i < tamanho; i++) {
        if (array[i] == array[i - 1]) {
            contagemAtual++;
        } else {
            contagemAtual = 1;
        }

        if (contagemAtual > contagemModa) {
            contagemModa = contagemAtual;
            moda = array[i];
        }
    }

    return moda;
}

int main(int argc, char *argv[]) {
	
	int array[20];
	int i, moda;
	float media, mediana;
	
	media = mediana = moda = 0;
	
	for(i=0;i<20;i++) {
		printf("Diigite o valor da posição %d: ",i);
		scanf("%d",&array[i]);
		
		media += array[i];
		
		if (i==9 || i==10) {
			mediana += array[i];
		}
		
		
	}
	
	media /= 20;
	mediana /= 2;
	moda = calcularModa(array, 20);
	
	
	printf("\n");
	printf("Os dados do vetor sao:\n");
	printf("\n");
	printf("Moda: %d\n", moda);
    printf("Mediana: %.2f\n", mediana);
    printf("Média: %.2f\n", media);
	
	return 0;
}
