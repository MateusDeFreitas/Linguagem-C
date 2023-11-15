#include <stdio.h>

int main() {
    int n1, n2, i;
    int sdn1 = 0;
    int sdn2 = 0;

    printf("Digite dois números para verificar se são amigos: \n");
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
        printf("%d e %d são amigos!\n", n1, n2);
    } else {
        printf("%d e %d não são amigos.\n", n1, n2);
    }

    return 0;
}

