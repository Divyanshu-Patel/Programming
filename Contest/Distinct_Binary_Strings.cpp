#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;

        long long c = 1;
        for(int i = 1; i < n; i++){
            if(s[i]!=s[i-1]){
                c++;
            }
        }

        cout<<c<<endl;
    }

    return 0;
}