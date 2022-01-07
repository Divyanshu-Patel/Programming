#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,x;
        cin>>n>>x;
        long long ans = 0;

        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        map <long long, long long> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }

        for(auto i:mp){
            mp[i.first] -= min(i.second,mp[i.first*x]);
            mp[i.first*x] -= min(i.second,mp[i.first*x]);
        }
        for(auto i:mp){
            ans += i.second;
        }

        cout<<ans<<endl;
    }

    return 0;
}