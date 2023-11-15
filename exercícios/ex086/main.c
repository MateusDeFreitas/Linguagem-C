#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char romano[100];
    int decimal = 0;
    int i, j;

    printf("Digite um numero romano (Digite somente letras minusculas): ");
    scanf("%s", romano);

    for (i = 0; romano[i] != '\0'; i++) {
    	if (romano[i] == romano[i+1] && romano[i] == romano[i+2] && romano[i] == romano[i+3]) {
    		printf("Numero invalido");
			return 1;
		}
		else if (romano[i] == 'm') {
			decimal += 1000;
		} else if (romano[i] == 'c' && romano[i+1] == 'm') {
			decimal += 900;
			i += 1;
		} else if (romano[i] == 'd' && romano[i+1] == 'c' && romano[i+2] == 'c' && romano[i+3] == 'c') {
			decimal += 800;
			i += 3;
		} else if (romano[i] == 'd' && romano[i+1] == 'c' && romano[i+2] == 'c') {
			decimal += 700;
			i += 2;
		} else if (romano[i] == 'd' && romano[i+1] == 'c') {
			decimal += 600;
			i += 1;
		} else if (romano[i] == 'd') {
			decimal += 500;
		} else if (romano[i] == 'c' && romano[i+1] == 'd') {
			decimal += 400;
			i += 1;
		} else if (romano[i] == 'c' && romano[i+1] == 'c' && romano[i+2] == 'c') {
			decimal += 300;
			i += 2;
		} else if (romano[i] == 'c' && romano[i+1] == 'c') {
			decimal += 200;
			i += 1;
		} else if (romano[i] == 'c') {
			decimal += 100;
		} else if (romano[i] == 'x' && romano[i+1] == 'c') {
			decimal += 90;
			i += 1;
		} else if (romano[i] == 'l' && romano[i+1] == 'x' && romano[i+2] == 'x' && romano[i+3] == 'x') {
			decimal += 80;
			i += 3;
		} else if (romano[i] == 'l' && romano[i+1] == 'x' && romano[i+2] == 'x') {
			decimal += 70;
			i += 2;
		} else if (romano[i] == 'l' && romano[i+1] == 'x') {
			decimal += 60;
			i += 1;
		} else if (romano[i] == 'l') {
			decimal += 70;
		} else if (romano[i] == 'x' && romano[i+1] == 'l') {
			decimal += 40;
			i += 1;
		} else if (romano[i] == 'x' && romano[i+1] == 'x' && romano[i+2] == 'x') {
			decimal += 30;
			i += 2;
		} else if (romano[i] == 'x' && romano[i+1] == 'x') {
			decimal += 20;
			i += 1;
		} else if (romano[i] == 'x') {
			decimal += 10;
		} else if (romano[i] == 'i' && romano[i+1] == 'x') {
			decimal += 9;
			i += 1;
		} else if (romano[i] == 'x' && romano[i+1] == 'i' && romano[i+2] == 'i' && romano[i+3] == 'i') {
			decimal += 8;
			i += 3;
		} else if (romano[i] == 'x' && romano[i+1] == 'i' && romano[i+2] == 'i') {
			decimal += 7;
			i += 2;
		} else if (romano[i] == 'v' && romano[i+1] == 'i') {
			decimal += 6;
			i += 1;
		} else if (romano[i] == 'v') {
			decimal += 5;
		} else if (romano[i] == 'i' && romano[i+1] == 'v') {
			decimal += 4;
			i += 1;
		} else if (romano[i] == 'i' && romano[i+1] == 'i' && romano[i+2] == 'i') {
			decimal += 3;
			i += 2;
		} else if (romano[i] == 'i' && romano[i+1] == 'i') {
			decimal += 2;
			i += 1;
		} else if (romano[i] == 'i') {
			decimal += 1;
		} else {
			printf("Numero invalido ou muito alto");
			return 1;
		}
    }

    printf("Representação decimal: %d\n", decimal);

    return 0;
}

