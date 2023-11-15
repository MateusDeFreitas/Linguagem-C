#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int lim, t1, t2, t, i;
	
	printf("Esse programa gera a série de FETUCCINE\n");
	printf("Para isso, em sequência digite os 2 primeiros números da série: \n");
	scanf("%d",&t1);
	scanf("%d",&t2);
	printf("Agora digite até qual termo a série deve ir: \n");
	scanf("%d",&lim);	
	
	if (lim<3) {
		printf("[ERRO] para dar continuidade a série o ultimo termo deve ser ao menos o terceiro.\n");
	} else {
		printf("Série de Fetuccine com %d termos: %d %d ", lim, t1, t2);
		for (i = 3; i <= lim; i++) {
            if (i % 2 == 1) {
                t = t1 + t2;
            } else {
                t = t1 - t2;
            }

            printf("%d ", t);

            t1 = t2;
            t2 = t;
        }
        printf("\n");
	}
	
	return 0;
}

