#include<bits/stdc++.h>
using namespace std;

void prt(int i, int n){

    if(i>n){
        return;
    }

    prt(i+1, n);
    cout<<i<<endl;

}

int main(){

    int n;
    cin>>n;

    prt(1, n);
    return 0;
}