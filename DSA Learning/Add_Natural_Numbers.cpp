#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    long long ans = 0;
    cin>>n;

    for(int i = 1; i <= n; i++){
        ans += i;
    }

    cout<<ans<<endl;

    return 0;
}