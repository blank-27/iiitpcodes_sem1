#include <stdio.h>
int main()
{
    FILE *fil;
    int sum = 0,n, x;
    fil = fopen("sum.txt", "r+");
    printf("Enter the number of inputs in file:");
    scanf("%d",&n);
     if (fil != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            fscanf(fil, "%d", &x);
            sum = sum + x;
        }
        printf(" Sum of numbers in file are:%d", sum);
        int c = fclose(fil);
    }
    else
        printf("error!!");
    return 0;
}