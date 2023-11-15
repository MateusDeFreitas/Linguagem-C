#include <stdio.h>
#include <string.h>

int main() {
    char pri[100];
    char seg[100];
	int i, j = 0, k, l, cont;
	
	
	printf("Digite a primeira string: ");
    scanf("%99s", pri);
	printf("Digite a segunda string: ");
    scanf("%99s", seg);
    

	if (strlen(pri)<strlen(seg)) {
		printf("A primeira string nao contem a segunda.\n");
	} else {
		for(i=0;i<=strlen(pri);i++) {			
			if (cont!=strlen(seg)) {
				cont = 0;
			}			
			if (pri[i]==seg[j]) {				
				for(k=0, l = i ; k<strlen(seg) ; k++,l++) {					
					if (pri[l]==seg[k]) {
						cont++;
					} else {
						break;
					}
				}
			}
		}
		if (cont==strlen(seg)) {
			printf("A primeira string contem a segunda.\n");
		} else {
			printf("A primeira string nao contem a segunda.\n");
		}
	}	
    return 0;
}


