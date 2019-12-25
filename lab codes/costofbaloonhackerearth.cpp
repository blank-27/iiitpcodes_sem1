#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,bg,cp,n,A[100],B[100];
cin>>a;
while(a){
cin>>bg;
cin>>cp;
cin>>n;
int p=0,g=0;
for(int i=0;i<n;i++){
cin>>A[i]>>B[i];}
for(int i=0;i<n;i++)
{if(A[i]==1)
g++;
if(B[i]==1)
p++;
}
int sum1=0,sum2=0;
sum1=p*bg+g*cp;
sum2=p*cp+g*bg;
if(sum1>sum2)
cout<<sum2<<"\n";
else 
cout<<sum1<<"\n";
a--;
}

return 0;
}