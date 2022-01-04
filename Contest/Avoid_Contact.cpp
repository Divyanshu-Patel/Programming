#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;
        int ans = 0;

        if(n==0){
            ans = n;
        }

        else if(n == m){
            ans = (2*n) - 1;
        }

        else{
            ans = (2*m) + (n -m);
        }

        cout<<ans<<endl;
    }

    return 0;
}