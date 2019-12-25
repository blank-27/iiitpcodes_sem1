#include <stdio.h>
int main()
{ 
    int n;
    printf("Enter dimensions for the square matrix");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter value of matrix A");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter value of matrix B");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    printf("MATRIX A is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("MATRIX b is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", b[i][j]);
            printf("\n");
    }
    printf("AFTER MULTIPLICATION:\n");
    for(int i=0;i<n;i++)
    {   
        for(int k=0;k<n;k++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum=sum+(a[i][j]*b[j][k]);
            }
            c[i][k]=sum;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
}