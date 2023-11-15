#include <stdio.h>

#define N 13

int main() {
    int matriz[N][N] = {0};
    int idadeH, idadeM;

    printf("Informe as idades do homem e da mulher no casamento (18 a 30):\n");

    while (1) {
        printf("Idade homem (ou valor negativo para encerrar): ");
        scanf("%d", &idadeH);

        if (idadeH < 0) {
            break;
        }

        printf("Idade mulher (ou valor negativo para encerrar): ");
        scanf("%d", &idadeM);

        if (idadeM < 0) {
            break;
        }

        if (idadeH >= 18 && idadeH <= 30 && idadeM >= 18 && idadeM <= 30) {
            matriz[idadeH - 18][idadeM - 18]++;
        } else {
            printf("Idade inválida. Idades devem estar entre 18 e 30.\n");
        }
    }

    int maisFreqH = 18;
    int maisFreqM = 18;
    int maxFreqH = 0;
    int maxFreqM = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > maxFreqH) {
                maxFreqH = matriz[i][j];
                maisFreqH = i + 18;
            }
            if (matriz[i][j] > maxFreqM) {
                maxFreqM = matriz[i][j];
                maisFreqM = j + 18;
            }
        }
    }

    int maisFreqIdadesH = 18;
    int maisFreqIdadesM = 18;
    int maxFreqIdades = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > maxFreqIdades) {
                maxFreqIdades = matriz[i][j];
                maisFreqIdadesH = i + 18;
                maisFreqIdadesM = j + 18;
            }
        }
    }
	
	printf("\n");
	printf("\n");
    printf("Idade mais frequente de casamento dos homens: %d\n", maisFreqH);
    printf("Idade mais frequente de casamento das mulheres: %d\n", maisFreqM);
    printf("Combinação mais frequente de idades de casamento: Homens (%d) e Mulheres (%d)\n", maisFreqIdadesH, maisFreqIdadesM);

    return 0;
}

