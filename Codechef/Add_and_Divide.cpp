#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
	 ll t;
	 cin>>t;
	  while(t--){
            ll a,b;
	  	    cin>>a>>b;
            if(a==1){
                cout<<"YES\n";
            }else{
                while(true){
                    ll temp = __gcd(a,b);
                    if(a==1){ cout<<"YES\n"; break;}
                    if(temp==1){cout<<"NO\n";break;}
                    a=a/temp;
                }
            }
	  }
	return 0;
}