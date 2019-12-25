#include<stdio.h>
void main()
{
    char s[100];
    char x;
    int i,j,l;
    printf("Enter the string :");
    scanf("%s",&s);
    printf("Enter the alphabet :");
    scanf("\n%c",&x);
    for(j=0;s[j]!='\0';j++);
    for(i=j-1,l=1;i>=0;i--)
    {
        if(x==s[i])
        {
            printf("Index of alphabet : %d\n",i);
            break;
        }
        
    if(i==0)
    printf("\nElement not found ");
    }
}