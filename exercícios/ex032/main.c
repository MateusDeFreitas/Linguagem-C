#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char carac;
	
	printf("Digite um caracter: ");
	scanf("%c",&carac);
	
	if ((carac >= 'a' && carac <='z') || (carac >= 'A' && carac <='Z')) {
		if (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u' ||
		carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U') {
			
	    printf("A letra %c e uma vogal.\n", carac);
	    } else {
	    printf("A letra %c e uma consoante.\n", carac);
	    }
	} else if (carac >= '0' && carac <= '9') {
        printf("O caractere '%c' é um número.\n", carac);
    } else {
   		printf("Esse caracter '%c' é um simbolo",carac);
	}
	
	return 0;
}
