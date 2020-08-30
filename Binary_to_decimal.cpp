https://www.geeksforgeeks.org/program-binary-decimal-conversion/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int count=0;
        long long int ans=0;
        while(n>0)
        {
            int rem=n%10;
            ans+=rem*(pow(2,count));
            count++;
            n/=10;
        }
        cout<<ans<<"\n";
    }
	return 0;
}
