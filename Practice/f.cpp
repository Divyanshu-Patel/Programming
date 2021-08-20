#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    bool k = 0;

    for (int i=2; i < n; i++){
        if(n%i==0){
            cout<<"Non Prime";
            k = 1;
            break;
        }
    }
    if(k==0){
        cout<<"Prime";
    }


    return 0;
}