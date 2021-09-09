#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,t;
    cin>>n;

    long long arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    //for(int i = 0; i < n; i++){
    //    cout<<arr[i]<<endl;
    //}

    long long max = 0;
    for(int i = 0; i < n; i++){
        t=(arr[i]*(n-i));
        if(t>max){
            max = t;
        }
    }

    cout<<max<<endl;


    return 0;
}