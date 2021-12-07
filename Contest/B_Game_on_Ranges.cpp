#include<bits/stdc++.h>
using namespace std;
bool comparator(vector<int>&A,vector<int>&B)
{
	if(A[1]!=B[1]) return A[1]>B[1];
	return A[0]<B[0];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,c;
		cin>>n;
		vector<vector<int>> intervals;
		for(int i=0;i<n;i++)
		{
			cin>>r>>c;
			intervals.push_back({r,c});
		}
		sort(intervals.begin(),intervals.end(),comparator);
		for(int i=0;i<n;i++)
		{
			cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
		}
		cout<<endl;
		
	}
}