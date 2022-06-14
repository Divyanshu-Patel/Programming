#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    int sum = 0;
    cin>>n;

    int arr[n+1];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    arr[n] = -1;
    

    for(int i = 0; i<n; i++){

        if(arr[i]>sum && arr[i]>arr[i+1]){
            ans++;
        }

        sum = max(sum, arr[i]);
    }

    cout<<ans;

    return 0;
}