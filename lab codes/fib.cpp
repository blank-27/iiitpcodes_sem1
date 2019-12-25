#include<bits/stdc++.h>
// #include<vector>
using namespace std;
int fib(int n,int a[])
{
   // int a,b;
    for(int i=1;i<n;i++)
{
    if(a[i]!=0)
    return (a[i]+fib(n,a[n]);
    else
    {
        a[i]=fib(n-1,a[n])+fib(n-2,a[n]);
    }
    
}

    if(n<2)return(n);
    else {
        ab=fib(n-1);
        b=fib(n-2);
        return (ab+b);
    }
}
int main()
{int n,A[101];
cin>>n;
for(int i=0;i<n;i++){
cout<<fib(i,A[n])<<" ";
}}