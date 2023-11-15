#include <stdio.h>

int main() {
    int N, i;
    double pi = 0.0;

    printf("Digite o n�mero de termos (N) para calcular pi: \n");
    printf("(quanto maior o n�mero de termos maior � a prox�midade com o n�mero pi!)\n");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        int denominador = 2 * i + 1;
        if (i % 2 == 0) {
            pi += 1.0 / denominador;
        } else {
            pi -= 1.0 / denominador;
        }
    }

    pi *= 4;

    printf("O valor aproximado de pi com %d termos �: %.15lf\n", N, pi);

    return 0;
}

