//https://www.geeksforgeeks.org/add-two-numbers-represented-by-two-arrays/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
        cin>>b[i];
        long long int aa=0,bb=0,index=1;
        for(int i=0;i<n;i++)
        {
            aa+=a[n-i-1]*index;
            index*=10;
        }
        index=1;
        for(int i=0;i<m;i++)
        {
            bb+=b[m-i-1]*index;
            index*=10;
        }
        cout<<aa+bb<<"\n";
    }
	return 0;
}
