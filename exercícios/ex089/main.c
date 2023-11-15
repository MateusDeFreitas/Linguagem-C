#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome[100];
	char unome[100];	
	char is1[2];
	char ini[2];
	int i = 0, c = 0, j = 0;
	
	printf("Digite o seu nome e sobrenome: ");
	scanf("%99[^\n]", nome);

	for(i=0 ; i<strlen(nome) ; i++) {
		if (i==0) {
			ini[i] = nome[i]; 
		}
		else if (nome[i]==' ' && c == 0) {
			is1[0] = nome[i+1];
			c++;
		}
	}
	
	ini[1] = '\0';
	is1[1] = '\0';
	
	for(i=0, c=0 ; i<strlen(nome) ; i++) {
		if(nome[i] == ' ') {
			c++;
		}
		if(c==2) {
			unome[j] = nome[i];
			j++;
		}
	}
	
	unome[j] = '\0';
	
	printf("%s, %s. %s.\n",unome, ini, is1);
	
	
	
	return 0;
}
