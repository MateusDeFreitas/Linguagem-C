#include <stdio.h>


double calcularFatorial(int n) {
	int i;
    double fatorial = 1.0;
    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int n, i;

    printf("Digite o número de termos (n) para calcular o número de Euler (e): ");
    scanf("%d", &n);

    double euler = 1.0;

    for (i = 1; i <= n; i++) {
        double termo = 1.0 / calcularFatorial(i);
        euler += termo;
        printf("e para %d termos: %.10lf\n", i, euler); 
    }

    return 0;
}
