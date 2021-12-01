#include <bits/stdc++.h>
using namespace std;
 
int main() {

	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,p,q,x,y,sum;
		cin>>a>>b>>p>>q;

		x = abs(a-p);
		y = abs(b-q);

        sum = x+y;

        if(sum != 0){
            if(sum%2==0){
                cout<<"2"<<endl;
            }

            else{
                cout<<"1"<<endl;
            }
        }

        else{
            cout<<"0"<<endl;
        }
 
	}
	return 0;
}