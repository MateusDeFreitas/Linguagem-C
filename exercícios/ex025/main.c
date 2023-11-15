#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mes;
	
	printf("Digite o n�mero do mes (1 a 12)): ");
	scanf("%d",&mes);
	
	if (mes >= 1 && mes <= 12) {
		
		int dias;
		
		switch (mes) {
			case 4: case 6: case 9: case 11:
				dias = 30;
				break;
			case 2:
				dias = 28;
				break;
		default:
                dias = 31;
                break;
		}
		
	printf("O m�s %d tem %d dias.\n", mes, dias);
    } else {
        printf("M�s inv�lido. Por favor, digite um n�mero entre 1 e 12.\n");
    }
	
	
	
	
	return 0;
}
