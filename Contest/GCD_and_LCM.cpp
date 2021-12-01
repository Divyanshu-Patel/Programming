#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long a, b;
        cin>>a>>b;
        
        long long x;
        x = __gcd(a,b);

        cout<< x <<" " << (a*b)/x << endl;

    }

    return 0;
}