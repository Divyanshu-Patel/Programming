#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        long long n;
        cin>>n;
        long long arr[n];
        bool f = true;

        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(i>0 && arr[i-1]%arr[i]!=0){

                f = false;
            
            }
        }
        if(f == true){
            for(int i=0; i<n; i++){

                cout<<arr[i]<<" ";

            }

            cout<<endl;
        }
        else{

            cout<<"-1"<<endl;
        
        }
    }

    return 0;
}