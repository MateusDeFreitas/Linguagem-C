#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int passesTentados, passesCompletos, jardasPassadas, passesTouchdown, passesInterceptados;
    double completionsPercentage, yardsPerAttempt, touchdownsPerAttempt, interceptionsPerAttempt, qbRating;

    printf("Digite o número de passes tentados: ");
    scanf("%d", &passesTentados);
    printf("Digite o número de passes completos: ");
    scanf("%d", &passesCompletos);
    printf("Digite o número de jardas passadas: ");
    scanf("%d", &jardasPassadas);
    printf("Digite o número de passes para touchdown: ");
    scanf("%d", &passesTouchdown);
    printf("Digite o número de passes interceptados: ");
    scanf("%d", &passesInterceptados);

    completionsPercentage = (double)passesCompletos / passesTentados;
    yardsPerAttempt = ((double)jardasPassadas / passesTentados - 3) / 4;
    touchdownsPerAttempt = ((double)passesTouchdown / passesTentados) / 0.05;
    interceptionsPerAttempt = (0.095 - (double)passesInterceptados / passesTentados) / 0.04;

    completionsPercentage = completionsPercentage > 2.375 ? 2.375 : completionsPercentage;
    completionsPercentage = completionsPercentage < 0 ? 0 : completionsPercentage;
    
    yardsPerAttempt = yardsPerAttempt > 2.375 ? 2.375 : yardsPerAttempt;
    yardsPerAttempt = yardsPerAttempt < 0 ? 0 : yardsPerAttempt;
    
    touchdownsPerAttempt = touchdownsPerAttempt > 2.375 ? 2.375 : touchdownsPerAttempt;
    touchdownsPerAttempt = touchdownsPerAttempt < 0 ? 0 : touchdownsPerAttempt;
    
    interceptionsPerAttempt = interceptionsPerAttempt > 2.375 ? 2.375 : interceptionsPerAttempt;
    interceptionsPerAttempt = interceptionsPerAttempt < 0 ? 0 : interceptionsPerAttempt;

    qbRating = ((completionsPercentage - 0.3) / 0.2 + (yardsPerAttempt - 3) / 4 + touchdownsPerAttempt + interceptionsPerAttempt) / 6 * 100;

    printf("O QB Rating do quarterback é: %.2lf\n", qbRating);
	
	return 0;
}
