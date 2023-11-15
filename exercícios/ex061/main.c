#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[20];
	int i;
	
	for (i = 0 ; i < 20 ; i++) {
		array[i] = 0;
	}
	
	for (i = 0 ; i < 20 ; i++) {
		printf("Na posição %d: %d\n",i,array[i]);
	}
	
	
	
	
	
	return 0;
}
