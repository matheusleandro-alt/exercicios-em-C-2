#include <stdio.h>

int main() {
    float a, b;
    char resposta;

    do {
        do {
            printf("Digite a 1ª nota (0 a 10): ");
            scanf("%f", &a);
        }while (a < 0 || a > 10);
        do {
            printf("Digite a 2ª nota (0 a 10): ");
            scanf("%f", &b);
        }while (b< 0 || b> 10);
        printf("Média = %.2f\n", (a+b)/2);
        do {
            printf("\n Novo cálculo (S/N)? ");
            scanf(" %c", &resposta);
        }while (resposta != 'S' && resposta != 's' &&
                 resposta != 'N' && resposta != 'n');
    }while (resposta == 'S' || resposta == 's');
    return 0;
}