//https://www.geeksforgeeks.org/program-for-armstrong-numbers/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int num=n;
	    int final,rem;
	    while(n>0)
	    {
	        rem=n%10;
	        final+=pow(rem,3);
	        n/=10;
	    }
	    if(final==num)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    cout<<"No\n";
	}
	return 0;
}
