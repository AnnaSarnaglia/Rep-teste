#include <stdio.h>
#include <math.h>

/* Problema: Suponha que você está desenvolvendo um jogo 2D de tiro ao alvo
e  você  deseja  verificar  se  um  tiro  acertou  o  alvo.  Assuma  que  o  tiro  e  o  alvo  são
círculos e são conhecidas suas posições e raios.



Definição dos formatos de entrada e saída:
• Entrada: As coordenadas X e Y do alvo e seu raio R. Em seguida, as coordenadas e
o raio do disparo.
• Saída: Seu programa deverá informar se o tirou acertou o alvo.
Ver exemplos de formato de entrada e saída nos arquivos fornecidos com a questão.
 */

int main()
{

    float Xa, Ya, Ra, Xd, Yd, Rd, d, raio2;

    scanf("%f %f %f %f %f %f", &Xa, &Ya, &Ra, &Xd, &Yd, &Rd);
    raio2 = Ra + Rd;
    d = sqrt(pow(Xa - Xd, 2) + pow(Ya - Yd, 2));

    if (raio2 >= d)
    {
        printf("ACERTOU");
    }
    else
    {
        printf("ERROU");
    }

    return 0;
}