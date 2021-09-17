#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std; 


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cpp_int fact = 1;
        for(int i = n; i >= 2; i-- ){
        fact = fact*i;
        }
        cout<<fact<<endl;
        
    }

    return 0;
}