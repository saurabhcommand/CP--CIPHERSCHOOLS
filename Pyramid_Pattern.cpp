#include<bits/stdc++.h>
using namespace std;
//Simple Pyramid Pattern
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		cout<<"* ";
		cout<<"\n";
	}
}

// Pyramid after 180 degree rotation
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			if(j<n-i-1)
//			cout<<"  ";
//			else
//			cout<<"* ";
//		}
//		cout<<"\n";
//	}
//}


// printing triangle
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			if(j<n-i-1)
//			cout<<" ";
//			else
//			cout<<"* ";
//		}
//		cout<<"\n";
//	}
//}


//Number Pattern
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<j<<" ";
//		}
//		cout<<"\n";
//	}
//}



//Numbers without assigning
//int main()
//{
//	int n;
//	cin>>n;
//	int count=0;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<++count<<" ";
//		}
//		cout<<"\n";
//	}
//}

