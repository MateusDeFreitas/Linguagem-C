#include <stdio.h>

int main() {
    int numero, invertido = 0;

    printf("Digite um número de três algarismos [maior que 99 e menor que 1000]: ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999) {
        printf("Por favor, digite um número de três algarismos.\n");
    } else {
        while (numero != 0) {
            int digito = numero % 10;
            invertido = invertido * 10 + digito;
            numero = numero / 10;
        }

        printf("O número invertido é: %d\n", invertido);
    }

    return 0;
}
