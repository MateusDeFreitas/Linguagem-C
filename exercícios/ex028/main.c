#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
	letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
		
    printf("A letra %c e uma vogal.\n", letra);
    } else {
    printf("A letra %c e uma consoante.\n", letra);
    }
	
	
	return 0;
}
