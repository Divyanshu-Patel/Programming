#include<bits/stdc++.h>
using namespace std;

void prt(int i, int n){

    if(i<1){
        return;
    }

    cout<<i<<endl;
    prt(i-1, n);

}

int main(){

    int n;
    cin>>n;

    prt(n, n);
    return 0;
}