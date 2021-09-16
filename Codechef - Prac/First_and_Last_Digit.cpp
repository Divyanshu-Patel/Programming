#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, f;
        cin>>n;
        int sum = 0;

        int l = n%10;

        while(n>0){
            f = n%10;
            n = n/10;
        }
        sum=l+f;
        cout<<sum<<endl;

    }

    return 0;
}