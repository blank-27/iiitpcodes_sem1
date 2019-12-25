#include<bits/stdc++.h> 
using namespace std; 
  int c=0;
int fib(int n) 
{ c++;
    if (n <= 1) 
        return n; 
    else
    return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
    int n = 9; for(int i=0;i<n;i++){
    cout <<"  "  <<fib(i); }
  cout<<"\nworking "<<c;//  getchar(); 
    return 0; 
} 