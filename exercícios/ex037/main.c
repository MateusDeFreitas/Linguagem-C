#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char praga;
	int tipo, acre, custo, valor, sobra;
	
	printf("Digite o tipo de praga à ser pulverizada: \n[1] Ervas Daninhas\n[2] Gafanhotos\n[3] Broca\n[4] Todos os anteriores\n");
	scanf("%d",&tipo);
	
	switch (tipo) {
		
		case 1:
			printf("Para pulverizar ervas daninhas, custará R$ 50,00 por acre\n");
			custo = 50;
			praga = 'Erva Daninha';
			break;
		case 2:
			printf("Para pulverizar gafanhotos, custará R$ 100,00 por acre\n");
			custo = 100;
			praga = 'Gafanhotos';
			break;
		case 3:
			printf("Para pulverizar broca, custará R$ 150,00 por acre\n");
			custo = 150;
			praga = 'Broca';
			break;
		case 4:
			printf("Para pulverizar todas pragas, custará R$ 250,00 por acre\n");
			custo = 250;
			break;
	}
	
	printf("Digite a quantidade de à serem pulverizados: \n");
	scanf("%d",&acre);
	
	valor = custo*acre;
	
	if (acre>1000) {
		valor*=0.95;
	}
	
	if (valor>750) {
		sobra = valor - 750;
		valor = valor - sobra + sobra*0.9;
	}
	
	
	if (tipo == 4) {
		printf("O custo de pulverizar todas as pragas de um perimetro de %d acres, será %d/n",acre,valor);
	} else {
		printf("O custo de pulverizar a praga '%c' de um perimetro de %d acres, será %d/n",praga,acre,valor);
	}
	return 0;
}
