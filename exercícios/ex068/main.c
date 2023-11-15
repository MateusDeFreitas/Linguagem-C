#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float indices[30];
	int i, dmaior, dmenor;
	float maior, menor, q1, q2;
	
	printf("Informe o indice pluviometrico dos respectivos dias do mes de julho:\n");
	
	for(i=0;i<30;i++) {
		printf("digite o indice do dia %d: ",i+1);
		scanf("%f",&indices[i]);
		if(i==0) {
			maior = indices[i];
			menor = indices[i];
		} else {
			if(indices[i]<menor) {
				menor = indices[i];
				dmenor = i+1;
			}
			if(indices[i]>maior) {
				maior = indices[i];
				dmaior = i+1;
			}
		}
		if(i<15) {
			q1+=indices[i];
		} else {
			q2+=indices[i];
		}
	}
	
	q1/=15;
	q2/=15;
	
	printf("O dia que mais choveu foi o %d com um indice de %f.\n",dmaior, maior);
	printf("O dia que menos choveu foi o %d com um indice de %f.\n",dmenor, menor);
	printf("A media da primeira quinzena foi: %f\n",q1);	
	printf("A media da segunda quinzena foi: %f\n",q2);	
	
		
	
	return 0;
}
