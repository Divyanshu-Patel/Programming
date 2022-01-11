#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int c = 0;
        int arr[k];

        for(int i = 0; i<k; i++){
            cin>>arr[i];
        }

        for(int i=0; i<k; i++){
            for(int j=arr[i]; j>c; j--){
                cout<<j<<" ";
            }
            c = arr[i];
        }

        cout<<endl;
    }

    return 0;
}