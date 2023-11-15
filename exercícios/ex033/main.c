#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x, y;
	
	printf("Digite a cordenada X: ");
	scanf("%f",&x);
	printf("Digite a cordenada Y: ");
	scanf("%f",&y);
	
	if (x == 0 && y == 0) {
        printf("O ponto (%.2f, %.2f) est� na origem.\n", x, y);
    } else if (x == 0) {
        printf("O ponto (%.2f, %.2f) est� sobre o eixo das ordenadas (eixo Y).\n", x, y);
    } else if (y == 0) {
        printf("O ponto (%.2f, %.2f) est� sobre o eixo das abscissas (eixo X).\n", x, y);
    } else if (x > 0 && y > 0) {
        printf("O ponto (%.2f, %.2f) est� no primeiro quadrante.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("O ponto (%.2f, %.2f) est� no segundo quadrante.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("O ponto (%.2f, %.2f) est� no terceiro quadrante.\n", x, y);
    } else {
        printf("O ponto (%.2f, %.2f) est� no quarto quadrante.\n", x, y);
    }
	
	return 0;
}
