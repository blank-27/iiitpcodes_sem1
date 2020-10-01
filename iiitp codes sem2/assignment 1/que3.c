#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str[20];
    scanf(" %s", str);
    int l = strlen(str);
    char *p = &str[l - 1];
    while (p != &str[0])
    {
        printf("%c", *p);
        p--;
    }
    printf("%c", *p);
    printf("\n");
    return 0;
}
