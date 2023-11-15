#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int buscaBinaria(int vetor[], int tam, int valor) {
    int ini = 0;
    int fim = tam - 1;
    int pos = -1;

    while (ini <= fim) {
        int meio = (ini + fim) / 2;

        if (vetor[meio] == valor) {
            pos = meio;
            fim = meio - 1; 
        } else if (vetor[meio] < valor) {
            ini = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return pos;
}

int main() {
    int vetor[10]; 
    int valor, i;

    printf("Digite os 10 elementos do vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);

    int pos = buscaBinaria(vetor, 10, valor);

    if (pos != -1) {
        printf("O valor %d foi encontrado na posição %d do vetor.\n", valor, pos);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", valor);
    }

    return 0;
}

