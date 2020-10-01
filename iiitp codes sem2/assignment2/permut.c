#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int l, int r)
{
    int i;
    if (l == r)
        printf("%s\n", a);
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i)); 
        }
    }
}

int main()
{
    char s[100];
    printf("Enter string:-\n");
    scanf("%s",s);
    int n = strlen(s);
    printf("Permutation are:-\n");
    permute(s, 0, n - 1);
    return 0;
}
