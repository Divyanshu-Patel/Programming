#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m,rb,cb,rd,cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

		int l=1,r=1;

		int count=0;

		while(rb!=rd && cb!=cd)
		{
			count++;
            
			if(rb+l>n || rb+l<1)
			{
				l=-l;
			}

			if(cb+r>m || cb+r<1)
			{
				r=-r;
			}
            
			rb+=l;
			cb+=r;
		}

		cout << count << "\n";
	}
    return 0;
}