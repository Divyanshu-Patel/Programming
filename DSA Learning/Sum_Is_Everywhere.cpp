#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    long long even = 0;
    long long odd = 0;
    cin>>n;

    for(int i=1; i <= n*2; i=i+2){
        even += i;
        
    }

    cout<<even<<" ";

    for(int i=2; i <= n*2; i=i+2){
        odd += i;
        
    }

    cout<<odd;
    
    return 0;
}