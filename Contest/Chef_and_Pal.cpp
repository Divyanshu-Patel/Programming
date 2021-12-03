#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        if(n%2 != 0){
            cout<<"-1"<<endl;
        }

        else{
            for(int i =1; i<=n; i++){
                if(i%2 != 0){
                    cout<<"1";
                }

                else{
                    cout<<"0";
                }
            }

            cout<<endl;
        }
    }

    return 0;
}