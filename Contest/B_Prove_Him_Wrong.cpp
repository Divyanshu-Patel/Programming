#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        long long ans = 1;
        bool flag = true;

        int temp = n;
        if(n>19){
            cout<<"NO"<<endl;
        }

        else{
            cout<<"YES"<<endl;
            ans = 1;
            while(n--){
                cout<<ans<<" ";
                ans=ans*3;
            }

            cout<<endl;
        }

    }

    return 0;
}