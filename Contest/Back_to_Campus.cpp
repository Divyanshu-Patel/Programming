#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int k, n;
        cin>>k>>n;

        int a = n%k;
        int b = n/k;
        if(a==0){
            cout<<b<<endl;
        }

        else if (k==n){
            cout<<"1"<<endl;
        }

        else {
            cout<<"2"<<endl;
        }
    }

    return 0;
}