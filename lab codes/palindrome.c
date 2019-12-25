#include<stdio.h>
void main()
{
    char str1[100];
    int i,j,f=0;
    printf("Enter the string :\n");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        if(str1[j]!=str1[i-j-1])
        {
            f=1;
            break;
        }
        
    }
    if(f==1)
        printf("Not a palindrome");
        else
        printf("Yes it is a palindrome");

}