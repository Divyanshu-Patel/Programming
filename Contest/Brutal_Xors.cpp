#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,c;
        int ans = 0;
        cin>>n;

        if(n%2==1){
            cout<<"-1"<<endl;
        }

        else{
            c = 1;
            while(n>0){
                if(c == 1){
                    ans += 1;
                }

                else{
                    ans += 0;
                }

                c += -1;
                n -= 1;
            }

            cout<<ans<<endl;
        }
    }

    return 0;
}