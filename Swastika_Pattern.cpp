#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i<n/2)
		{
			for(int j=0;j<n;j++)
			{
				if(i==0 )
				{
					if(j==0 || j>=n/2)
					cout<<"* ";
					else
					cout<<"  ";
				}
				else if(j==0 || j==n/2)
				{
					cout<<"* ";
				}
				else
				cout<<"  ";
			}
			cout<<"\n";
		}
		else if(i==n/2)
		{
			for(int j=0;j<n;j++)
			cout<<"* ";
			cout<<"\n";
		}
		else
		{
			for(int j=0;j<n;j++)
			{
				if(i==n-1)
				{
					if(j<=n/2 || j==n-1)
					cout<<"* ";
					else
					cout<<"  ";
				}
				else if(j==n-1 || j==n/2)
				cout<<"* ";
				else
				cout<<"  ";
			}
			cout<<"\n";
		}
	}
}
