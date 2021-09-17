#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,p;
        cin>>n;

        int count = 0;

        while(n>0){
            r = n%10;
        if(r==4){
            count++;
        }

        n = n/10;
        }

        cout<<count<<endl;




    }

    return 0;
}