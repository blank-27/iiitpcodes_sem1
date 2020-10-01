#include <stdio.h>
#include <string.h>
char st[100], top = 0;

int oper(char ch)
{
  if (ch == '*' || ch == '/')
    return 2;
  else if (ch == '+' || ch == '-')
    return 1;
  else
    return -1;
}

void pop()
{
  if (top != 1)
  {
    if (st[top] != '(' && st[top] != ')')
      printf("%c", st[top]);
    top--;
  }
}
void push(char ele)
{
  if (top == 98)
    printf("Stack Overflow\n");
  else
  {
    top++;
    st[top] = ele;
  }
}

int main()
{
  push('N');
  char s[100];
  scanf("%s", s);
  printf(" Infix ex: %s ", s);

  printf(" postfix ex:");
  for (int i = 0; i < strlen(s); i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i]>='1' &&s[i]<='9')
    {
      printf("%c", s[i]);
    }
    else if (s[i] == '(')
    {
      push(s[i]);
    }
    else if (s[i] == ')')
    {
      while (st[top] != 'N' && st[top] != '(')
      {
        pop();
      }
      if (st[top] == '(')
      {
        pop();
      }
    }
    else
    {
      while (oper(s[i]) <= oper(st[top]) && st[top] != 'N')
      {
        pop();
      }

      push(s[i]);
    }
  }
  while (st[top] != 'N')
    pop();
}