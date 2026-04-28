#include <stdio.h>
#include "eleicao.h"
#include "candidato.h"
#include "eleitor.h"

/**
 * @brief Inicializa uma eleição com valores padrão (zerando os votos invalidos).
 * Ainda nessa função, é lido a quantidade de candidatos e os candidatos são lidos e armazenados.
 * @return Eleição inicializada.
 */
tEleicao InicializaEleicao()
{
    tCandidato C;
    tEleitor E;
    tEleicao ele;
    ele.totalEleitores = 0;
    ele.totalGovernadores = 0;
    ele.totalPresidentes = 0;
    ele.votosBrancosGovernador = 0;
    ele.votosNulosGovernador = 0;
    ele.votosNulosPresidente = 0;

    return ele;
}

/**
 * @brief Realiza uma eleição.
 * Nessa função, é lido a quantidade de eleitores e os eleitores são lidos e armazenados.
 * @param eleicao Eleição a ser realizada.
 * @return Eleição com os resultados da votação.
 */
tEleicao RealizaEleicao(tEleicao eleicao)
{
    tEleitor c;
    int quant = eleicao.totalEleitores;

    for (int i = 0; i < quant; i++)
    {
        eleicao.eleitores[i] = LeEleitor();
    }
    return eleicao;
}

/**
 * @brief Imprime o resultado da eleição na tela a partir da aparucao dos votos.
 * @param eleicao Eleição a ser impressa.
 */
void ImprimeResultadoEleicao(tEleicao eleicao)
{

    //(eleicao.governadores[])
}