#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number for star to be printed: ");
    scanf("%d",&x);
    int y=x*x;
    for(int i= 1;i<=y;i++)
    {
        printf("*");
        if(i%x==0)
        printf("\n");
    }
    return 0;
}