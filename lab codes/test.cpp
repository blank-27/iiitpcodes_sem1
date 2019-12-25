#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t,a,b;
	cin>>t;
	while(t)
	{
	    cin>>a;
	    b=a%10;
	    while(a)
	        a=a/10;
	    cout<<a+b<<endl;
	}
	return 0;
}
