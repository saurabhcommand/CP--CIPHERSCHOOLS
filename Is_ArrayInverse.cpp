//https://www.geeksforgeeks.org/check-if-the-given-array-is-mirror-inverse/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=1;
	for (int i = 0; i < n; i++)  
    { 
        if (a[a[i]] != i) 
        {
        	flag=0;
        }
    }
    if(flag)
    cout<<"Yes";
    else
    cout<<"No";
}
