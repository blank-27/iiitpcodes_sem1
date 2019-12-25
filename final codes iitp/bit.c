#include<stdio.h>
int main()
{   
    unsigned int n,a,c;
    float s=0;
    scanf("%d",&n);
    c=0;
    for(int i=0;i<n;i++)
    {   
        s=0;
        scanf("%d",&a);
        while (a>0)
        {
            a=a/2;
            c++;
        }
        s=s+c;
    }
    printf("%f", s/n);
}