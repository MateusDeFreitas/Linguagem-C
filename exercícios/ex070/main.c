#include <stdio.h>

int main() {
    int array[100];
    int tamanho = 0;
    int sentinela;
	
	printf("Digite um numero para ser usado como sentinela: ");
	scanf("%d",&sentinela);

    printf("Digite os elementos do array (use %d como sentinela para parar):\n", sentinela);

  
    while (tamanho < 100) {
        int valor;
        printf("Elemento %d: ", tamanho + 1);
        scanf("%d", &valor);

        if (valor == sentinela) {
            break; 
        }

        array[tamanho] = valor;
        tamanho++;
    }

	int i;
    
    printf("Elementos do array carregados:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Na posicao %d: %d\n", i, array[i]);
    }

    return 0;
}

