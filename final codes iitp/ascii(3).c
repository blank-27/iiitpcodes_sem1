#include <stdio.h>
#include<string.h>
int main()
{
  char ch[101];
  printf("Enter the string:-");
  gets(ch);
  int n=strlen(ch);
  printf("ASCII values are:-\n");
  for(int i=0;i<n;i++)
  {
      printf("%c -- %d\n",ch[i],ch[i]);
  }
}