#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a1, a2, a3, a4, a5, a6, a7;
        cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;

        if(a1+a2+a3+a4+a5+a6+a7>=4){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}