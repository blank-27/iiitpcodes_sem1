#include <stdio.h>
int main()
{
    int n;
    printf("Enter the limit:-\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   int a;
    int f=-1; 
    printf("Enter the number:-");
        scanf("%d",&a);
        for(int j=2;j<a;j++)
        {
            if(a%j==0)
            {
                f=0;
                break;
            }
        }
        if(f==0)
        {
            printf("%d is not a prime number\n",a);f=-1;
        }else
        {
            printf("%d is a prime number\n", a);
        }
    }
}