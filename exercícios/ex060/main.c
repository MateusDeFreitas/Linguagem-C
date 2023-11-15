#include <stdio.h>

int primo(int p) {
    int i;
    int dp;
    if (p <= 1) {
        return 2;
    }
    p++;
    while (1) {
        dp = 0;
        for (i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                dp = 1;
                break;
            }
        }
        if (dp == 0) {
            return p;
        }
        p++;
    }
}

int main() {
    int n, p1, p2;

    printf("A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois números primos.\n");
    printf("Testes foram feitos, mas ainda não se achou um contra-exemplo.\n");
    printf("Digite um número par entre 500 e 1000 para testar a conjectura: ");
    scanf("%d", &n);

    if (n >= 500 && n <= 1000 && n % 2 == 0) {
        p1 = primo(1); 
        p2 = n - p1;   

        while (p1 <= p2) {
            if (primo(p2-1) + p1 == n) {
                printf("A soma de %d e %d resulta em %d\n", p1, p2, n);
                break;
            }
            p1 = primo(p1 + 1);
            p2 = n - p1;
        }
    } else {
        printf("Número inválido. Por favor, digite um número par entre 1000 e 500.\n");
    }

    return 0;
}

