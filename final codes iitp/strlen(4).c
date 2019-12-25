#include <stdio.h>
#include<string.h>
void swap(char s1[100],char s2[100])
{
    char temp[100];
    strcpy(temp,s1);
    strcpy(s1, s2);
    strcpy(s2,temp);
}
int main()
{ 
    int n,y,z,k;
    printf("Enter the number of words to input:");
    scanf("%d",&n);
    char ch[100][100];
    printf("Enter the strings:");
    for(int i=0;i<n;i++)
    scanf("%s", &ch[i]);

    for(int i=0;i<n;++i)
    {
        for(int j=i;j<n;++j)
        {
            z = strlen(ch[i]);
            y=strlen(ch[j]);
            if(z>y)
            {   
                //k=j;
                swap(ch[i], ch[j]);
            }
        }
    }
    printf("-----after sorting-----\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",ch[i]);
    }
}