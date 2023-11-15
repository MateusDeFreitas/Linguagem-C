#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char s1[100];
	char s2[100];
	int i, j;
	
	printf("Digite alguma coisa: ");
    scanf("%99[^\n]", s1);
	
	for (i=0,j=0 ; i<strlen(s1) ; i++) {
		if (s1[i]!=' ') {
			s2[j] = s1[i];
			j++;
		}
	}
	
	s2[j] = '\0';
	
	printf("A palavra \"%s\" normalizada se torna: \"%s\"\n",s1,s2);
	
	
	return 0;
}
