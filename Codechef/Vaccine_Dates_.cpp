#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        long long d, a, b;
        cin>>d>>a>>b;

        if(d>=a && d<=b){
            cout<<"Take second dose now"<<endl;
        }

        else if(d<a && d<b){
            cout<<"Too Early"<<endl;
        }

        else{
            cout<<"Too Late"<<endl;
        }
    }

    return 0;
}