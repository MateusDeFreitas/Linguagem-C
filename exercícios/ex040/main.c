#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
    
    printf("Digite um n�mero inteiro de 1 a 100: ");
    scanf("%d", &num);
    
    if (num < 1 || num > 100) {
        printf("N�mero fora do intervalo permitido.\n");
    } else {
        const char *ext[100] = {
            "um", "dois", "tr�s", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez",
            "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove", "vinte",
            "vinte e um", "vinte e dois", "vinte e tr�s", "vinte e quatro", "vinte e cinco", "vinte e seis",
            "vinte e sete", "vinte e oito", "vinte e nove", "trinta", "trinta e um", "trinta e dois", "trinta e tr�s",
            "trinta e quatro", "trinta e cinco", "trinta e seis", "trinta e sete", "trinta e oito", "trinta e nove",
            "quarenta", "quarenta e um", "quarenta e dois", "quarenta e tr�s", "quarenta e quatro", "quarenta e cinco",
            "quarenta e seis", "quarenta e sete", "quarenta e oito", "quarenta e nove", "cinquenta", "cinquenta e um",
            "cinquenta e dois", "cinquenta e tr�s", "cinquenta e quatro", "cinquenta e cinco", "cinquenta e seis",
            "cinquenta e sete", "cinquenta e oito", "cinquenta e nove", "sessenta", "sessenta e um", "sessenta e dois",
            "sessenta e tr�s", "sessenta e quatro", "sessenta e cinco", "sessenta e seis", "sessenta e sete", "sessenta e oito",
            "sessenta e nove", "setenta", "setenta e um", "setenta e dois", "setenta e tr�s", "setenta e quatro", "setenta e cinco",
            "setenta e seis", "setenta e sete", "setenta e oito", "setenta e nove", "oitenta", "oitenta e um", "oitenta e dois",
            "oitenta e tr�s", "oitenta e quatro", "oitenta e cinco", "oitenta e seis", "oitenta e sete", "oitenta e oito",
            "oitenta e nove", "noventa", "noventa e um", "noventa e dois", "noventa e tr�s", "noventa e quatro", "noventa e cinco",
            "noventa e seis", "noventa e sete", "noventa e oito", "noventa e nove", "cem"
        };
        
        
	printf("N�mero por extenso � %s\n", ext[num - 1]);
    }
	
	return 0;
}
