#include <stdio.h>
#include <stdlib.h>

void imprimirArray(int array[], int tamanho) {
	int i;
	for(i=0;i<tamanho;i++) {
		 printf("%d ", array[i]);
    }
	printf("\n");
}

int encontrarIndice(int array[], int tamanho, int valor) {
	int i;
	for(i=0;i<tamanho;i++) {
		if(array[i]==valor) {
			return i;
		}
	}
	return -1;
}

void inserirNoFinal(int array[], int *tamanho, int valor) {
	if(*tamanho<30) {
		array[*tamanho] = valor;
		(*tamanho)++; 
	    printf("\nElemento %d inserido no final do vetor.\n", valor);
    } else {
        printf("\nO vetor está cheio. Não é possível inserir mais elementos.\n");
    }
}

void inserirNaPosicao(int array[], int *tamanho, int valor, int posicao) {
	int i;
	if(*tamanho<=30 && *tamanho>=0 && posicao<=*tamanho) {
		for (i = *tamanho; i > posicao; i--) {
            array[i] = array[i - 1];
        }
        array[posicao] = valor;
        (*tamanho)++;
        printf("Elemento %d inserido na posição %d do vetor.\n", valor, posicao);
    } else {
        printf("Posição inválida ou o vetor está cheio. Não é possível inserir o elemento.\n");
    }
}

void removerDaPosicao(int array[], int *tamanho, int posicao) {
	int i;
	if (posicao>=0 && posicao < *tamanho) {
		for (i=posicao;i<*tamanho;i++) {
			array[i] = array[i+1];
		}
	(*tamanho)--;
        printf("Elemento removido da posição %d do vetor.\n", posicao);
    } else {
        printf("Posição inválida. Não é possível remover o elemento.\n");
    }
	
}

void removerValor(int array[], int *tamanho, int valor) {
	 int i, j;
	 int encontrados = 0;
    for (i = 0; i < *tamanho; i++) {
        if (array[i] == valor) {
            for (j = i; j < *tamanho - 1; j++) {
                array[j] = array[j + 1];
            }
            (*tamanho)--;
            i--; // Verificar o novo elemento no mesmo índice
            encontrados++;
        }
    }
    if (encontrados > 0) {
        printf("%d elemento(s) de valor %d removido(s) do vetor.\n", encontrados, valor);
    } else {
        printf("Valor %d não encontrado no vetor.\n", valor);
    }
}

void removerDuplicatas(int array[], int *tamanho) {
	int i, j, k;
    for (i = 0; i < *tamanho; i++) {
        for (j = i + 1; j < *tamanho;) {
            if (array[j] == array[i]) {
                for (k = j; k < *tamanho - 1; k++) {
                    array[k] = array[k + 1];
                }
                (*tamanho)--;
            } else {
                j++;
            }
        }
    }
    printf("Duplicatas removidas do vetor.\n");
}

int main(int argc, char *argv[]) {
	
	int array[30];
    int tamanho = 0;
    int opcao;
    int elemento;
    int posicao;
	int i;
	
	while(1) {
		printf("\n");
		printf("Vetor atual: ");
		printf("\n");
        imprimirArray(array, tamanho);
        printf("\n");
        printf("Escolha uma opção:\n");
        printf("1. Inserir um elemento no final do vetor\n");
        printf("2. Inserir um elemento em uma posição\n");
        printf("3. Remover um elemento de uma posição\n");
        printf("4. Remover todos elementos iguais a um valor\n");
        printf("5. Gerar um novo array sem duplicidades\n");
        printf("6. Sair\n");
        scanf("%d", &opcao);
        
        switch (opcao) {
        	case 1:
        		printf("Digite o elemento a ser inserido no final: ");
                scanf("%d", &elemento);
                inserirNoFinal(array, &tamanho, elemento);
                break;
            case 2:
            	printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elemento);
                printf("Digite a posição onde deseja inserir: ");
                scanf("%d", &posicao);
                inserirNaPosicao(array, &tamanho, elemento, posicao);
                break;
            case 3:
                printf("Digite a posição do elemento a ser removido: ");
                scanf("%d", &posicao);
                removerDaPosicao(array, &tamanho, posicao);
                break;
            case 4:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &elemento);
                removerValor(array, &tamanho, elemento);
                break;
            case 5:
                removerDuplicatas(array, &tamanho);
		}
        if (opcao==6) {
        	break;
		}
	}
	
	
	

	
	
	return 0;
}
