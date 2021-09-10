#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin >> n;
        int ans = 0;
        int k = 5;

        while((n/k)>0)
        {
            ans += (n/k);
            k = k*5;
        }

        cout << ans << endl;
    }
    return 0;

}