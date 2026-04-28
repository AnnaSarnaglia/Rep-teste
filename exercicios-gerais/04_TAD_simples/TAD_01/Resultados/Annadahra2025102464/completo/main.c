#include <stdio.h>
#include "jogo.h"
#include "jogador.h"
#include "jogada.h"

int main()
{
    int continuar = 1;

    while (continuar)
    {
        tJogo jogo = CriaJogo();

        while (!AcabouJogo(jogo))
        {
            JogaJogador(jogo.jogador1, jogo.tabuleiro);
            JogaJogador(jogo.jogador2, jogo.tabuleiro);
        }

        if (VenceuJogador(jogo.jogador1, jogo.tabuleiro))
        {
            printf("JOGADOR 1 Venceu!\n");
        }
        else if (VenceuJogador(jogo.jogador2, jogo.tabuleiro))
        {
            printf("JOGADOR 2 Venceu!\n");
        }
        else
        {
            printf("Empate!\n");
        }

        continuar = ContinuaJogo();
    }

    return 0;
}