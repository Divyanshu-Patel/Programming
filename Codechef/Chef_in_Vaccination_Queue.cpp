#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, p, x, y;
        int sum = 0;
        cin>>n>>p>>x>>y;

        int arr [n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        for(int i = 0; i < p; i++){
        
            if(arr[i]==1){
                sum += y;
            }

            else if(arr[i]==0){
                sum += x;
            }
        }

        cout<<sum<<endl;

    }

    return 0;
}