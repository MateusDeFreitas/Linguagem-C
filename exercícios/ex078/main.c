	#include <stdio.h>
	#include <stdlib.h>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char *argv[]) {
		
		char string[100];
		char carac;
		int i, ncarac = 0;
		
		printf("Digite uma palavra: ");
		scanf(" %99[^\n]%*c", string);
		
		printf("Digite algum caracter: ");
		scanf("%c", &carac);
	
	    for (i = 0; string[i] != '\0'; i++) {
	        if (string[i] == carac) {
	            ncarac++;
	        }
	    }	
	
		printf("O caracter '%c' aparece %d vezes na palavra \"%s\" \n", carac, ncarac,string);
	
		
		return 0;
	}
