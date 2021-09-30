#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        long long c = 0;
        cin>>n;

        for(int i = 2; i <= n/2; i++){
            if(n%i==0){
                c = 1;
                break;
            }
        }

        if(c == 1 || n == 1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }

    return 0;
}