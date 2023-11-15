#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int array[10];
	int i;
	
	for (i=0 ; i<10 ; i++) {
		printf("Digite o número que ficará na posição %d: ",i);
		scanf("%d",&array[i]);
	}
	int cont = 0;
	for (i=0 ; i<10 ; i++) {
		if (array[i]%2==0) {
			cont++;
		}
	}
	
	printf("Foram digitados %d números pares.\n",cont);
	
	return 0;
}
