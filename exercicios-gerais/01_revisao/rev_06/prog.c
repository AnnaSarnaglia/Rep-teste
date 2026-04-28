#include <stdio.h>

/*  Funkos  são  miniaturas  colecionáveis, para isso, a loja rotulou cada um dos Funkos utilizando caracteres alfa-numéricos
de acordo com as categorias dos mesmos. A regra da promoção é a seguinte: somente Funkos de uma categoria
que possuem mais exemplares do que um limite pré-determinado podem ter o preço alterado

Faça um programa que receba como entrada um conjunto de rótulos e retorne apenas aqueles que estão
aptos a entrar em promoção e a quantidade dos mesmos. Veja os casos de teste para compreender
melhor o padrão de entrada e saída.

Exemplo  de  funcionamento:  seu  programa  deve  ler  a  quantidade  limite  de  Funkos  e  uma  lista
rótulos para determinar quem pode entrar em promoção. Por exemplo, se a quantidade limite for 3 e
os rótulos forem AAbbCAA12anshbbb11111, seu programa deve retornar:

1: 6
A: 4
b: 5

Observe que a ordem dos rótulos respeita a ordem crescente da tabela ASCII. Se não houver Funkos
em promoção, seu programa deve imprimir NENHUM. */

/*Limites:
●  O tamanho máximo da lista de rótulos é 1000
●  Os rótulos assumem valores alfa-numéricos (A-Z, a-z e 0-9)
●  A quantidade limite é um número inteiro */

int main()
{
    int qnt_lim;
    char leitura[1001]; //+1 para o '\0'
    char leival[1001];  //+1 para o '\0'

    char letras_lidas[1000];
    int qtd = 0,inv=0;

    char troca;
    scanf("%d", &qnt_lim);
    scanf("%*c");

    scanf("%s", leitura);

    for (int i = 0; leitura[i] != '/0'; i++)
    {
        for (int k = 0; leitura[i] != '/0'; k++)
        {
            if (leitura[i + 1] <= leitura[i])
            {
                troca = leitura[i];
                leitura[i] = leitura[i + 1];
                leitura[i + 1] = leitura[i];
            }
        }
    }
    for (int i = 0; leitura[i] != '/0'; i++)
    {
        for (int k = 0; leitura[i] != '/0'; k++)
        {
            if (leitura[i] = leitura[k])
            {

            }
        }
    }
    return 0;
}