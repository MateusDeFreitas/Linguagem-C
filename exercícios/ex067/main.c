#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int v1[10];
	int v2[10];
	int v3[10];
	int i;
	
	for(i=0;i<10;i++) {
		printf("Digite o valor da posição %d para o primeiro vetor: ",i);
		scanf("%d",&v1[i]);
	}

	printf("\n");
	printf("Agora para o segundo vetor:\n");
	printf("\n");

	for(i=0;i<10;i++) {
		printf("Digite o valor da posição %d para osegundo vetor: ",i);
		scanf("%d",&v2[i]);
	}
	
	for(i=0;i<10;i++) {
		if (v1[i]>v2[i]) {
			v3[i] = v1[i];
		} else {
			v3[i] = v2[i];	
		}
	}
	
	printf("\n");
	printf("O terceiro vetor é formado pelos maiores números dos dois primeiros vetores em suas respectivas posições.\n");
	printf("\n");
	for(i=0;i<10;i++) {
		printf("O valor da posição %d do terceiro vetor é %d\n",i,v3[i]);
	}
	
	
	return 0;
}
