#include <stdio.h>

/*REV_02) Problema: Faça um programa que receba um valor inteiro N e imprima as
N linhas do triângulo a seguir, conhecido como triangulo de Floyd. (no caso de N = 5):

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Definição dos formatos de entrada e saída:
• Entrada: Um valor inteiro N.
• Saída: As N linhas do triângulo de Floyd.
Ver exemplos de formato de entrada e saída nos arquivos fornecidos com a questão.
 */

int main()
{

    int N, i = 0, j = 0, valt = 1, quatporlinha = 1;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < quatporlinha; j++)
        {
            printf("%d ", valt);
            valt++;
        }
        printf("\n");
        quatporlinha++;
    }

    return 0;
}