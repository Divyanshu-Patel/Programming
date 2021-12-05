#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

        for(int i = 1; i<=t; i++){
            int n;
            cin>>n;

            if(n==2){
                cout<<"2 1";
            }

            else{
                cout<<"1"<<" ";

                for(int j = 3; j <n+1; j++){
                    cout<<j<<" ";
                }

                cout<<"2";
            }
            cout<<endl;
        }

    

    return 0;
}

