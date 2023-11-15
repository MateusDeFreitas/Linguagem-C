#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char s1[100];
	char s2[100];
	int i, j, x = 0;
	
	printf("Digite uma string: ");
	scanf("%99s", s1);
	printf("Digite outra string: ");
	scanf("%99s", s2);
	
	if (strlen(s1) == strlen(s2)) {
		for(i=0; i<strlen(s1); i++) {
			for(j=0; j<strlen(s2);j++) {
				if(s1[i] == s2[j]) {
					x++;
					break;
				}
			}
		}
	}
	
	if (x==strlen(s1)) {
		printf("As strings sao semelhantes.\n");
	} else {
		printf("As strings nao sao semelhantes.\n");
	}
	
	return 0;
}
