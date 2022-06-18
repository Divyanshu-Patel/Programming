#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int xorr=0;
    for(int i = 0; i<n; i++){
        xorr = xorr^arr[i];   //XOR is commutative as well as associative i.e. why 0^(1^1)^(2^2)^3 = 0^0^0^3 = 3
    }

    cout<<xorr<<endl;

    return 0;
}