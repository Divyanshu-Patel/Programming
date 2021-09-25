#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;

        if(b>=n){
            if((a+c)>=n){
                cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }


        }

        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}