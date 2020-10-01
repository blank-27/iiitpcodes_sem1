#include <iostream>
#include <string.h>
using namespace std;
int alph[30][2];
void func()
{
    char ch = 'a';
    char *a = &ch;
    for (int i = 0; i < 26; i++)
    {
        alph[i][0] = int(*(a) + i - 'a');
        alph[i][1] = 0;
    }
}

int main()
{
    // string s;
    char vow[50], s[100], con[50];
    int c = 0, v = 0, vc = 0, cc = 0,uv=0,uc=0;
    printf("Enter the string:----");
    scanf("%s", s);
    char *x = s;
    func();
    for (int i = 0; i < strlen(s); i++)
    {
        if (*x == 'a' || *x == 'A' || *x == 'e' || *x == 'E' || *x == 'I' || *x == 'i' || *x == 'o' || *x == 'u' || *x == 'U' || *x == 'O')
        {
            v++;
            if(alph[(int)(*x - 'a')][1]==0)
            {
                vow[vc] = *x;
                alph[(int)(*x - 'a')][1] = 1;
                vc++;
            }
            
        }
        else
        {
            if (alph[(int)(*x - 'a')][1] == 0)
            {
                con[cc] = *x;
                alph[(int)(*x - 'a')][1] = 1;
                cc++;
            }
            c++;
        }
        x++;
    }
    printf("vowels are :- %d \n", v);
    for (int i = 0; i < vc; i++)
    {
        printf("%c ", vow[i]);
    }
    printf("\n");
    printf("consonants are :- %d \n",cc);
    for (int i = 0; i < cc; i++)
    {
        printf("%c ", con[i]);
    }
}