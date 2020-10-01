#include <stdio.h>
#include <string.h>
int main()
{
    int n, m1,m2, r;
    printf("Enter the dimensions of the first matrix\n");
    scanf("%d%d", &n, &m1);
    printf("Enter the dimensions of the second matrix\n");
    scanf("%d%d", &m2, &r);
    if (m1 == m2)
    {
        int A[n][m1];
        int B[m2][r];
        printf("Enter matrix 1");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Enter matrix 2");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < r; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        int C[n][r];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < r; j++)
            {
                C[i][j]=0;
                for (int k = 0; k < m1; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < r; j++)
            {
                printf(" %d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix can't be multiplied.");
    }
    return 0;
}