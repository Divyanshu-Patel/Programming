#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x;
        cin>>x;

        long long result = 1;
        while(x != 0){
            result *= 2;
            --x;
        }

        cout<<(result - 1)<<endl;

    }

    return 0;
}