#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	float ace, dist, velLimite, tChegada, tSemaforo;
	
	printf("Digite a velocidade limite da via (em m/s): \n");
	scanf("%f",&velLimite);
	
	printf("Digite a aceleração dos carros (em m/s^2): \n");
	scanf("%f",&ace);
	
	printf("Digite a distância entre os semaforos (em metros): \n");
	scanf("%f",&dist);
	
	tChegada = sqrt((2 * dist) / ace);

    tSemaforo = tChegada - 3.0;

    printf("O próximo semáforo deve abrir %.2f segundos depois.\n", tSemaforo);

   
	
	
	
	
	return 0;
}
