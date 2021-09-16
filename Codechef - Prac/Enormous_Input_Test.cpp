#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int count = 0;

    int rr[n];

    for(int i = 0; i < n; i++){
        cin>>rr[i];
    }

    for(int j = 0; j < n; j++){
        if(rr[j]%k==0){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}