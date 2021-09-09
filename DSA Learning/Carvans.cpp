#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        //Important
        int count = 1;
        int max = arr[0];

        for(int i = 0; i < n-1; i++){
            
            if(max>=arr[i+1]){
                max = arr[i+1];
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}