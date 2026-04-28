#include <stdio.h>
#include "usuario.h"
#include <string.h>

/**
 * @struct tUsuario
 * @brief Estrutura que representa um usuário do sistema bancário.
 */
// typedef struct Usuario {
//  char nome[50]; /**< Nome do usuário. */
///  char cpf[15]; /**< CPF do usuário. */
//} tUsuario;

/**
 * @brief Cria um novo usuário.
 * @param nome Nome do usuário.
 * @param cpf CPF do usuário.
 * @return O novo usuário criado.
 */
tUsuario CriaUsuario(char nome[20], char cpf[15])
{

    tUsuario u;

    strcpy(u.nome, nome);
    strcpy(u.cpf, cpf);
    return u;
}

/**
 * @brief Imprime os dados de um usuário.
 * @param user Usuário a ser impresso.
 */
void ImprimeUsuario(tUsuario user)
{

    // Nome: matheus
    // CPF: 123456789

    printf("Nome: %s\n", user.nome);
    printf("CPF: %s\n\n", user.cpf);
}
