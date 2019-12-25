#include<iostream>
//#include<string.h>
using namespace std;
int main()
{char a[50],b[50];
cin>>a;
strcpy(b,a);
strrev('a');
if(a[50]==b[50])
cout<<"YES";
return 0;
}