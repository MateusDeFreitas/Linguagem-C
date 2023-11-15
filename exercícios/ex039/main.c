#include <stdio.h>
#include <string.h>

char calcularDigitoVerificador(char *numero) {
    int multiplicadores[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;
    int i;

    int tamanho = strlen(numero);
    char numeroInvertido[tamanho];
    for (i = 0; i < tamanho; i++) {
        numeroInvertido[i] = numero[tamanho - i - 1];
    }

    for (i = 0; i < tamanho; i++) {
        soma += (numeroInvertido[i] - '0') * multiplicadores[i % 9];
    }

    int digitoVerificador = 11 - (soma % 11);
    if (digitoVerificador == 10) {
        return 'X';
    } else {
        return digitoVerificador + '0'; 
    }
}

int main() {
    char primeirosDigitos[5];
    printf("Digite os 4 primeiros dígitos da agência: ");
    scanf("%4s", primeirosDigitos);

    if (strlen(primeirosDigitos) == 4) {
        char digitoVerificador = calcularDigitoVerificador(primeirosDigitos);
        printf("Número da agência completo: %s-%c\n", primeirosDigitos, digitoVerificador);
    } else {
        printf("Entrada inválida. Certifique-se de inserir exatamente 4 dígitos.\n");
    }

    return 0;
}

