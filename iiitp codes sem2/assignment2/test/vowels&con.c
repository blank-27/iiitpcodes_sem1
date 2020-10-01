#include <iostream.h>
using namespace std;
int alph[30][2];
void func()
{
    char ch = 'a';
    char *a = &ch;
    for (int i = 0; i < 26; i++)
    {
        alph[i][0] = int(*(a) + i);
        alph[i][1] = 0;
    }
    for (int i = 0; i < 26; i++)
    {
        // printf("%d - %d ,",,alph[i][1]);
        cout << alph[i][0] << "--" << alph[i][1] << "  \n";
    }
}
int main()
{
    func();
}
#include <stdio.h>
#include <string.h>
int alph[30][2];
void func()
{
    char ch = 'a';
    char *a = &ch;
    for (int i = 0; i < 26; i++)
    {
        alph[i][0] = (*(a) + i);
        alph[i][1] = 0;
    }
}
void main()
{
    char s[100],vow[50],con[50];
    int c=0,v=0,vc=0,cc=0;
    printf("Enter the string:----");
    scanf("%s",s);
    char* x = s;
    for(int i=0;i<strlen(s);i++)
    {
        if (*x == 'a' || *x  == 'A' || *x  == 'e' || *x == 'E' || *x == 'I' || *x  == 'i' || *x == 'o' || *x== 'u' || *x== 'U' || *x =='O')
        {
            vow[vc]=*x;
            int ch = (int)(*x - 'a');
             printf("%s",ch);
            v++;
            vc++;
        }else
        {
            con[cc] = *x;
            c++;
            cc++;
        }
        x++;
    }
    printf("vowels are :- %d \nconsonants are :- %d \n", v, c);
    for (int i = 0; i < v; i++)
    {
        printf("%c ", vow [i]);
    }
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        printf("%c ", con[i]);
    }
}