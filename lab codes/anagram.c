#include<stdio.h>
void main()
{
    int i,j,l,k,c=0;
    char s1[100];
    char s2[100];
    printf("Enter the strings :\n");
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++);
    if(i!=j)
    printf("Not a anagram");
    else
    {
        for(l=0;l<i;l++)
        {
            for(k=0;k<i;k++)
            {
                if(s1[l]==s2[k])
                {
                    s2[k]='*';
                    c++;
                    break;
                }
            }
        }
        if(c==i)
        printf("Yes it is an anagram");
        else
        printf("Not an anagram");
    }
}