#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, last;
        cin>>n;

        int rev = 0;

        while(n>0){

            last = n%10;
            rev = rev*10 + last;

            n = n/10;


        }
        
        cout<<rev<<endl;

    }

    return 0;
}