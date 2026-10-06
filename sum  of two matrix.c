#include <stdio.h>

int main()
{
    int n, i, j, m;

    printf("Enter the no of rows and columns of matrix A & B: ");
    scanf("%d %d", &n, &m);

    int A[n][m];
    int B[n][m];
    int R[n][m];

    printf("Enter elements of Matrix A:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            R[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the two matrices:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
