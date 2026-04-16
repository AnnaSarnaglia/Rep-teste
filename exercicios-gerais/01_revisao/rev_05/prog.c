#include <stdio.h>

int main(void)
{
    int m, n, xi = -1, yi = -1, xf = -2, yf = -2;
    scanf("%d %d", &m, &n);

    int matriz[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    //------------------------------------//

    scanf("%d %d", &xi, &yi);
    scanf("%d %d", &xf, &yf);

    // 🔥 CORREÇÃO IMPORTANTE (1 → 0 index)
    xi--; yi--;
    xf--; yf--;

    //------------------------------------//

    char prioridade[5];
    scanf(" %4s", prioridade);

    //------------------------------------//

    int visitado[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visitado[i][j] = 0;
        }
    }

    //------------------------------------//

    visitado[xi][yi] = 1;
    printf("(%d,%d) ", xi+1, yi+1);

    //------------------------------------//

    while (1)
    {
        if (xi == xf && yi == yf)
        {
            break;
        }

        int moveu = 0;

        for (int k = 0; k < 4; k++)
        {
            int ni = xi;
            int nj = yi;

            switch (prioridade[k])
            {
            case 'B': // baixo
                ni = xi + 1;
                break;

            case 'C': // cima
                ni = xi - 1;
                break;

            case 'D': // direita
                nj = yi + 1;
                break;

            case 'E': // esquerda
                nj = yi - 1;
                break;
            }

            if (ni >= 0 && ni < m && nj >= 0 && nj < n &&
                matriz[ni][nj] == 0 && visitado[ni][nj] == 0)
            {
                xi = ni;
                yi = nj;
                visitado[xi][yi] = 1;

                printf("(%d,%d) ", xi+1, yi+1);

                moveu = 1;
                break;
            }
        }

        if (moveu == 0)
        {
            break;
        }
    }

    return 0;
}