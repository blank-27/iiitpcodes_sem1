#include<stdio.h>
void main()
{
    int n;int s;
    scanf("%d",&n);
    s = n - 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s;j++)
        printf(" ");

        for(int k=0;k<=i;k++)
        printf("* ");

        printf("\n");
        s--;
    }s=1;
    for(int i=n-1;i>0;i--)
    {
        for (int j = 0; j <s; j++)
            printf(" ");

        for (int k =0; k<i;k++)
            printf("* ");

        printf("\n");
    s++;
    }
}