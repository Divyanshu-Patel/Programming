#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        long long ans;

        if(n<3){
            cout<<"0"<<endl;
        }
        
        else if(n==3){
            cout<<"10"<<endl;
        }

        else if(n>3){

            ans = pow(3, (n-3))*8*(n-2);

            ans = ans + ans/4;

            cout<<ans<<endl;

        }        
    }

    return 0;
}