#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,s,x;
        cin>>n>>s;

        long long sum = 0;

        sum = (n*(n+1))/2;

        x = sum - s;

        if(x>0 && x<=n){
            cout<<x<<endl;
        }

        else{
            cout<<"-1"<<endl;
        }


    }

    return 0;
}