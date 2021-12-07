#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
			
		string s;
		cin>>s;
		
		vector<int> v,vo;
		int zeros = 0, len = s.length();
		
		for(int i=0;i<len;++i){
			
			if(s[i] == '0'){
				zeros++;
				v.push_back(arr[i]);}
				
			else
				vo.push_back(arr[i]);
		}
				
		if(zeros == 0){
			
			for(int i=0;i<n;++i)
				cout<<arr[i]<<' ';
			cout<<endl;
			
		}
		else{
			
			sort(v.begin(),v.end());
			
			map<int, int> ans;
			
			for(int i=1;i<=zeros;++i)
				ans.insert({ v[i-1], i });
				
			sort(vo.begin(),vo.end());
			
			for(int i=zeros+1;i<=n;++i)
				ans.insert({ vo[i-zeros-1], i });
				
			for(int i=0;i<n;++i)
				cout<<ans[arr[i]]<<' ';
				
			cout<<endl;
			
			
		}
		
		
	}
	return 0;
}