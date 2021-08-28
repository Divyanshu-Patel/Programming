#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;

		long result=n*(n+1)/2;

		if(result%2==0)
		{
			cout<<n<<endl;
		}
		else
		{
			cout<<n-1<<endl;
		}
	}
}