#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        long long n;
        cin >> n;
        long long temp = log2(n);
        long long f = (int)pow(2, temp + 1) + n;
        
        cout << 0 << " " << n << " " << f << endl;
    
    }
    
    return 0;
}