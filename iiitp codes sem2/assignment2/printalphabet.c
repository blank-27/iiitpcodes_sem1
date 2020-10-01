#include<stdio.h>
#include <string.h>
void main()
{
    char s='a';
    char *a = &s;
    printf("alphabets from starting:\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *(a) + i);
    }
    printf("\n");
    printf("alphabets from ending:\n");
    for (int i = 25; i >= 0; i--)
    {
        printf("%c ", *(a) + i);
    }
 }