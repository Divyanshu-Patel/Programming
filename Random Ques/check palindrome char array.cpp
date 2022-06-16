#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    for(int i = 0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            cout<<"nopal"<<endl;
            return 0;
        }
    }

    cout<<"pal"<<endl;

    return 0;
}