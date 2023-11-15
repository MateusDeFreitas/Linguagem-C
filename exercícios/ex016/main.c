#include <stdio.h>

int main() {
    int numero, invertido = 0;

    printf("Digite um n�mero de tr�s algarismos [maior que 99 e menor que 1000]: ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999) {
        printf("Por favor, digite um n�mero de tr�s algarismos.\n");
    } else {
        while (numero != 0) {
            int digito = numero % 10;
            invertido = invertido * 10 + digito;
            numero = numero / 10;
        }

        printf("O n�mero invertido �: %d\n", invertido);
    }

    return 0;
}
