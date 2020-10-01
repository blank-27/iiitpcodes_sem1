#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[100], st[100];
int top = -1;

char pop()
{
    return st[top--];
}

void push(char ch)
{
    st[++top] = ch;
}

void postoinf(char exp[])
{
    int c, l;
    char ele, o;
    l = strlen(exp);
    for (c = 0; c < 100; c++)
    {
        st[c] = 0;
    }
    printf("\nInfix exp:\t");
    printf("%c", exp[0]);
    for (c = 1; c < l; c++)
    {
        if (exp[c] == '-' || exp[c] == '/' || exp[c] == '*' || exp[c] == '+')
        {
            ele = pop();
            o= exp[c];
            printf(" %c %c", o, ele);
        }
        else
        {
            push(exp[c]);
        }
    }
    printf("%c", exp[top--]);
}

int main()
{
    char s[50];
    printf("\nEnter Postfix exp:\t");
    scanf("%s", s);
    postoinf(s);
    printf("\n");
    return 0;
}