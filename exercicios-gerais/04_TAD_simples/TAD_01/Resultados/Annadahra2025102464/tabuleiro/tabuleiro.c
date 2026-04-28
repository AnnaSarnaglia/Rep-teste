#include "tabuleiro.h"

/**
 * Cria um tabuleiro e retorna o tabuleiro criado.
 *
 * @return o tabuleiro criado.
 */
tTabuleiro CriaTabuleiro()
{

    tTabuleiro t;
    t.peca1 = 'X';
    t.peca2 = '0';
    t.pecaVazio = '-';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t.posicoes[i][j] = t.pecaVazio;
        }
    }

    return t;
}

/**
 * Marca uma posição do tabuleiro com a peça do jogador e retorna o tabuleiro.
 *
 * @param tabuleiro o tabuleiro atual.
 * @param peca a peça do jogador (1 ou 2).
 * @param x a coordenada x da posição a ser marcada.
 * @param y a coordenada y da posição a ser marcada.
 *
 * @return o tabuleiro atualizado.
 */
tTabuleiro MarcaPosicaoTabuleiro(tTabuleiro tabuleiro, int peca, int x, int y)
{

    if (tabuleiro.posicoes[x][y] == tabuleiro.pecaVazio)
    {
        if (peca == 1)
        {
            tabuleiro.posicoes[x][y] = tabuleiro.peca1;
        }
        else
            tabuleiro.posicoes[x][y] = tabuleiro.peca2;
    }

    return tabuleiro;
}

/**
 * Verifica se há alguma posição livre no tabuleiro.
 *
 * @param tabuleiro o tabuleiro atual.
 *
 * @return 1 se há posição livre, 0 caso contrário.
 */
int TemPosicaoLivreTabuleiro(tTabuleiro tabuleiro)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tabuleiro.posicoes[i][j] == tabuleiro.pecaVazio)
            {
                return 1;
            }
        }
    }

    return 0;
}

/**
 * Verifica se a posição do tabuleiro está marcada com a peça do jogador.
 *
 * @param tabuleiro - o tabuleiro atual.
 * @param x a coordenada x da posição a ser verificada.
 * @param y a coordenada y da posição a ser verificada.
 * @param peca a peça do jogador (1 ou 2).
 *
 * @return 1 se a posição está marcada com a peça do jogador, 0 caso contrário.
 */
int EstaMarcadaPosicaoPecaTabuleiro(tTabuleiro tabuleiro, int x, int y, int peca)
{
    char c;
    if (peca == 1)
    {
        c = tabuleiro.peca1;
    }
    else
        c = tabuleiro.peca2;

    if (tabuleiro.posicoes[x][y] == c)
    {
        return 1;
    }
    else
        return 0;
}

/**
 * Verifica se a posição do tabuleiro está livre.
 *
 * @param tabuleiro o tabuleiro atual.
 * @param x a coordenada x da posição a ser verificada.
 * @param y a coordenada y da posição a ser verificada.
 *
 * @return 1 se a posição está livre, 0 caso contrário.
 */
int EstaLivrePosicaoTabuleiro(tTabuleiro tabuleiro, int x, int y)
{

    if (tabuleiro.posicoes[x][y] == tabuleiro.pecaVazio)
    {
        return 1;
    }
    else
        return 0;
}

/**
 * Verifica se a posição do tabuleiro é válida.
 *
 * @param x a coordenada x da posição a ser verificada.
 * @param y a coordenada y da posição a ser verificada.
 * @return 1 se a posição é válida, 0 caso contrário.
 */
int EhPosicaoValidaTabuleiro(int x, int y)
{

    if ((x >= 0 && x < 3) && (y >= 0 && y < 3))
    {
        return 1;
    }
    else
        return 0;
}

/**
 * Verifica se o tabuleiro está cheio.
 *
 * @param tabuleiro o tabuleiro atual.
 */
void ImprimeTabuleiro(tTabuleiro tabuleiro)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c", tabuleiro.posicoes[i][j]);
        }
        printf("\n");
    }
}