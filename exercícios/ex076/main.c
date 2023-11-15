	#include <stdio.h>
	#include <stdlib.h>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char *argv[]) {
		
		char string[100];
		int i, vog = 0;
		
		printf("Digite uma string: ");
		scanf("%99[^\n]", string);
	
	    for (i = 0; string[i] != '\0'; i++) {
	        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' 
			|| string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
	            vog++;
	        }
	    }	
	
		printf("Número de vogais na string: %d\n", vog);
	
		
		return 0;
	}
