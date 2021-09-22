#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, i;
        cin>>n;
        
        if(n==1){
            cout<<"3"<<endl;
        }

        else if(n==2){
            cout<<"15"<<endl;
        }
        else if(n>2){
            cout<<"3";
            for(i = 0; i<n-2;i++){
                cout<<"0";
            }
            cout<<"3";
        }
        cout<<endl;
    }

    return 0;
}