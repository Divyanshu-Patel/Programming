#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long b, c;
        cin>>b>>c;

        long long cnt = __gcd(b,c);
        long long ans = (b*c)/cnt;
        cout<<ans/b<<endl;

    }

    return 0;
}