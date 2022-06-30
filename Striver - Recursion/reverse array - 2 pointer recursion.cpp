#include<bits/stdc++.h>
using namespace std;

void revarr(int i, int l, int arr[], int n){

    if(i>=l){
        return;
    }

    swap(arr[i], arr[l]);

    revarr(i+1,l-1,arr,n);

}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    revarr(0, n-1, arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}