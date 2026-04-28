#include "jogo.h"
#include "jogador.h"
#include "tabuleiro.h"
#include <stdio.h>

/**
 * Cria um jogo e retorna o jogo criado.
 *
 * @return o jogo criado.
 */
tJogo CriaJogo()
{

    tJogo j;
    j.tabuleiro = CriaTabuleiro();
    j.jogador1 = CriaJogador(1); // ??
    j.jogador2 = CriaJogador(2);
    return j;
}

/**
 * Inicia o jogo, definindo o tabuleiro e os jogadores.
 *
 * @param jogo o jogo a ser iniciado.
 */
void ComecaJogo(tJogo jogo)
{

    ImprimeTabuleiro(jogo.tabuleiro);
}

/**
 * Verifica se o jogo acabou (se não há mais posições livres no tabuleiro).
 *
 * @param jogo o jogo atual.
 *
 * @return 1 se o jogo acabou, 0 caso contrário.
 */
int AcabouJogo(tJogo jogo)
{

    return !TemPosicaoLivreTabuleiro(jogo.tabuleiro);
}

/**
 * Verifica se o usuário deseja jogar novamente.
 *
 * @return 1 se o usuário deseja jogar novamente, 0 caso contrário.
 */
int ContinuaJogo()
{
    char c;
    scanf(" %c", &c);

    if (c == 's')
    {
        return 1;
    }
    else
        return 0;
}
