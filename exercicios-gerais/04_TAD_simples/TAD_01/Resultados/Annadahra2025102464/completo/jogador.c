#include "jogador.h"
#include <stdio.h>
#include "tabuleiro.h"
#include "jogada.h"

/**
 * Cria um jogador com o id passado como parâmetro e retorna o jogador criado.
 *
 * @param idJogador o id do jogador (1 ou 2).
 *
 * @return tJogador o jogador criado.
 */
tJogador CriaJogador(int idJogador)
{

    tJogador j;
    j.id = idJogador;
    return j;
}

/**
 * Recebe um jogador e um tabuleiro e retorna o tabuleiro com a jogada do jogador.
 *
 * @param jogador o jogador que fará a jogada.
 * @param tabuleiro o tabuleiro atual.
 *
 * @return o tabuleiro atualizado com a jogada do jogador.
 */
tTabuleiro JogaJogador(tJogador jogador, tTabuleiro tabuleiro)
{
    tJogada j;
    printf("Digite uma posicao (x e y):\n");

    j = LeJogada();
    int x, y;
    x = ObtemJogadaX(j);
    y = ObtemJogadaY(j);
ImprimeTabuleiro(tabuleiro);
    tabuleiro = MarcaPosicaoTabuleiro(tabuleiro, jogador.id, x, y);

    return tabuleiro;
}

/**
 * Recebe um jogador e um tabuleiro e retorna 1 se o jogador venceu e 0 caso contrário.
 *
 * @param jogador o jogador a ser verificado.
 * @param tabuleiro o tabuleiro atual.
 *
 * @return 1 se o jogador venceu, 0 caso contrário.
 */
int VenceuJogador(tJogador jogador, tTabuleiro tabuleiro)
{
    char c;

    if (jogador.id == 1)
        c = tabuleiro.peca1;
    else
        c = tabuleiro.peca2;

    // linhas
    if ((tabuleiro.posicoes[0][0] == c && tabuleiro.posicoes[0][1] == c && tabuleiro.posicoes[0][2] == c) ||
        (tabuleiro.posicoes[1][0] == c && tabuleiro.posicoes[1][1] == c && tabuleiro.posicoes[1][2] == c) ||
        (tabuleiro.posicoes[2][0] == c && tabuleiro.posicoes[2][1] == c && tabuleiro.posicoes[2][2] == c) ||

        // colunas
        (tabuleiro.posicoes[0][0] == c && tabuleiro.posicoes[1][0] == c && tabuleiro.posicoes[2][0] == c) ||
        (tabuleiro.posicoes[0][1] == c && tabuleiro.posicoes[1][1] == c && tabuleiro.posicoes[2][1] == c) ||
        (tabuleiro.posicoes[0][2] == c && tabuleiro.posicoes[1][2] == c && tabuleiro.posicoes[2][2] == c) ||

        // diagonais
        (tabuleiro.posicoes[0][0] == c && tabuleiro.posicoes[1][1] == c && tabuleiro.posicoes[2][2] == c) ||
        (tabuleiro.posicoes[2][0] == c && tabuleiro.posicoes[1][1] == c && tabuleiro.posicoes[0][2] == c))
    {
        return 1;
    }
    else
        return 0;
}