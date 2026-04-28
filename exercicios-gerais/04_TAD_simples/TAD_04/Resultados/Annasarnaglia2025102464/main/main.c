#include <stdio.h>
#include "aluno.h"

int main()
{
    int quant;
    scanf("%d", &quant);
    tAluno a, cliente[quant];
    int j = 0;

    for (int i = 0; i < quant; i++)
    {
        a = LeAluno();
        if (VerificaAprovacao(a) == 1)
        {
            cliente[j] = a;
            j++;
        }
    }

    int trocou = 1;

    while (trocou)
    {
        trocou = 0;

        for (int i = 0; i < j - 1; i++)
        {
            if (ComparaMatricula(cliente[i], cliente[i + 1]) == 1)
            {
                tAluno troca = cliente[i];
                cliente[i] = cliente[i + 1];
                cliente[i + 1] = troca;

                trocou = 1; // houve troca
            }
        }
    }

    for (int i = 0; i < j; i++)
    {
        ImprimeAluno(cliente[i]);
    }
    return 0;
}