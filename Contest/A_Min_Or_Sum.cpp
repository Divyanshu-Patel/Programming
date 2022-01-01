#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = 0;

        for(long long i = 0; i < n; i++){
            long long x;
            cin>>x;
            ans = ans|x;
        }

        cout<<ans<<endl;

    }

    return 0;
}