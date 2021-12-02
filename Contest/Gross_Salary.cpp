#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
	    
	   float s;
	   cin>>s;

	   if(s<1500){
	       
	       cout<<fixed<<setprecision(2)<<2*s<<endl; 
	   }

	    else
	    {
	        cout<<fixed<<setprecision(2)<<(s+500+s*.98)<<endl;
	    
	    }
	    
	}
	
	return 0;
}