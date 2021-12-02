#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;

        if(a==b && c%2==0){
            cout<<"YES"<<endl;
        }

        else if(b==c && a%2==0){
            cout<<"YES"<<endl;
        }

        else if(c==a && b%2==0){
            cout<<"YES"<<endl;
        }

        else if((a+b==c) || (b+c==a) || (c+a==b)){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}