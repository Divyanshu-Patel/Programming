#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int index, int key){

    if(index == n){
        return -1;
    }

    if(arr[index] == key){
        return index;
    }

    return firstocc(arr, n, index+1, key);

}


int main(){

    int n,key;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>key;

    int index = 0;

    cout<<firstocc(arr, n, index, key)<<endl;

    return 0;
}