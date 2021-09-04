#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    bool m=0;
    cin>>n>>k;

    int a[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i]==k){
            cout<<"1"<<endl;
            m = 1;

            break;
            
        }

    }
    if(m==0){
        cout<<"-1"<<endl;
    }
    
    return 0;
}