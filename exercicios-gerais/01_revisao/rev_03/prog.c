#include <stdio.h>

/*Problema: Em uma biblioteca, cada livro possui um identificador único que
é representado por um número inteiro de 1 até N. Porém, se existir cópias deste livro,
elas  possuem  o  mesmo  identificador.  É  sempre  desejável  ter  mais  de  uma  cópia  de
cada  livro  para  que  várias  pessoas  possam  usufruir  do  mesmo.  Sendo  assim,  os
funcionários  da  biblioteca  receberam  uma  lista  de  identificadores  de  livros  para
identificar quais não possuem cópias para solicitar a compra de um novo exemplar.
Sua função é criar um programa que identifique quais livros da lista não tem cópia e
retorne para o funcionário solicitar a compra.

Definição dos formatos de entrada e saída:
• Entrada:  Um  número  N  que  representa  a  quantidade  de  livros  seguido  dos  N
livros em si.
• Saída: O identificador dos livros que não possuem cópia.
Ver exemplos de formato de entrada e saída nos arquivos fornecidos com a questão.
 */

void fordefora(int n, int *v)
{
    int i, j, count, x = 0;

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = 0; j < n; j++)
        {
            if (v[i] == v[j])
                count++;
        }

        if (count == 1) // aparece só uma vez
        {
            printf("%d ", v[i]);
            x++;
        }
    }
    if (x == 0)
    {
        printf("NENHUM");
    }
}

int main()
{

    int n, nlivros[1000], i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nlivros[i]);
    }

    fordefora(n, nlivros);

    return 0;
}