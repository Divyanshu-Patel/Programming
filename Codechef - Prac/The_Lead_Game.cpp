#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int winner = 0;
    long long mx = LONG_LONG_MIN;
    long long s1 = 0, s2 = 0;
    while(n--){
        long long sum1, sum2;
        cin>>sum1>>sum2;
        s1+=sum1;
        s2+=sum2;
        if(s1>=s2){
            long long lead = s1 - s2;
            if(lead>mx){
                mx = lead;
                winner = 1;
            }
        }else{
            long long lead = s2 - s1;
            if(lead>mx){
                mx = lead;
                winner = 2;
            }
        }
    }
    cout<<winner<<" "<<mx<<endl;
    return 0;
}