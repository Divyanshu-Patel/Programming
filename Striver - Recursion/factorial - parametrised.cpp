#include<bits/stdc++.h>
using namespace std;

void fact(int sum, int n){

    if(n==0){
        cout<<sum;
        return;
    }
    
    sum *= n;
    fact(sum, n-1);
}

int main(){

    int n;
    cin>>n;

    fact(1,n);
    
    return 0;
}