#include <stdio.h>

int main() {
    int n1, n2, i;
    int sdn1 = 0;
    int sdn2 = 0;

    printf("Digite dois n�meros para verificar se s�o amigos: \n");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
            sdn1 += i;
        }
    }

    for (i = 1; i <= n2 / 2; i++) {
        if (n2 % i == 0) {
            sdn2 += i;
        }
    }

    if (sdn1 == n2 && sdn2 == n1) {
        printf("%d e %d s�o amigos!\n", n1, n2);
    } else {
        printf("%d e %d n�o s�o amigos.\n", n1, n2);
    }

    return 0;
}

