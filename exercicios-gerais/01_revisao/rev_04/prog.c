#include <stdio.h>

/*Dado toda essa introdução (PDF), sua missão aqui é construir um programa que receba um
número inteiro decimal e converta-o para um número um octal.

Definição dos formatos de entrada e saída:
• Entrada: Um número na base decimal.
• Saída: O número convertido para base octal.*/

int main()
{

    int decimal, i = 0, flag = 0;
    int vet[100];
    scanf("%d", &decimal);

    while (flag == 0)
    {

        if (decimal >= 8)
        {
            vet[i] = decimal % 8;
            decimal = decimal / 8;
            i++;
        }
        else
        {
            vet[i] = decimal;
            flag = 1;
        }
    }
    for (int j = i; j >= 0; j--)
    {
        printf("%d", vet[j]);
    }

    return 0;
}