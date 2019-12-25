#include<stdio.h>
void main()
{
    int n;
    printf("Enter dim:\n");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", a[i][j]);
            printf("\n");
    }
    for (int i = n; i >=0; i--)
    {
        for (int j = n; j>=i; j--)
        {
            if(a[i][j]==0)
            {   
                for(int k=0;k<n;k++)
                a[k][j]=-1;
                for (int k =0; k < n; k++)
                    a[i][k] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
           {
               if(a[i][j]==-1)
               a[i][j]=0;
           }
    }
    printf("------after operation--------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
}