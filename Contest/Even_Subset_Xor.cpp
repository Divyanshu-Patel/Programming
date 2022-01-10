#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        for(int i = 1; n > 0; i++){
            if(__builtin_popcount(i) % 2 == 0){
                cout<<i<<" ";
                n--;
            }
        }

        cout<<endl;
    }

    return 0;
}