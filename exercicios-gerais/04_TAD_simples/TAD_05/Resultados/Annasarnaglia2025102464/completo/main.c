#include <stdio.h>
#include "conta.h"
#include "usuario.h"

int main()
{
    int f = -1, maxdecontas, i = 0;

    scanf("%d", &maxdecontas);

    char nome[50], cpf[15];
    int numero;
    float valor;

    tConta c[maxdecontas];
    tUsuario u;

    while (f != 0)
    {
        scanf("%d", &f);

        switch (f)
        {
        case 1: // saque
            scanf("%d %f", &numero, &valor);

            for (int j = 0; j < i; j++)
            {
                if (VerificaConta(c[j], numero))
                {
                    c[j] = SaqueConta(c[j], valor);
                }
            }
            break;

        case 2: // deposito
            scanf("%d %f", &numero, &valor);

            for (int j = 0; j < i; j++)
            {
                if (VerificaConta(c[j], numero))
                {
                    c[j] = DepositoConta(c[j], valor);
                }
            }
            break;

        case 3: // cadastro
            scanf("%s", nome);
            scanf("%s", cpf);
            scanf("%d", &numero);

            u = CriaUsuario(nome, cpf);
            c[i] = CriaConta(numero, u);
            i++;
            break;

        case 4: // relatório
            printf("===| Imprimindo Relatorio |===\n");

            for (int j = 0; j < i; j++)
            {
                ImprimeConta(c[j]);
            }
            break;

        case 0:
            break;
        }
    }

    return 0;
}