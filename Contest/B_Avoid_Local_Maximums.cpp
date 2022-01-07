#include<bits/stdc++.h>
using namespace std;

int main()
{

	long long t, n;
	cin>>t;
	long long count;
	while (t--)
	{
		cin>>n;
		vector<long long> a(n);

		for (int i=0; i<n; i++)
		{
			cin>>a[i];

		}
		count = 0;
		for (int i=1; i<=(n-2); i++)
		{
			if (a[i] > a[i-1] && a[i] > a[i+1])
			{
				if(i == (n-2))
					a[i+1] = a[i];
				else
					a[i+1] = max(a[i], a[i+2]);
				count += 1;
			}
		}

		cout<<count<<endl;

		for (int i=0; i<n; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}

	return(0);
}