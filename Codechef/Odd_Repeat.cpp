#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin >> t;

while(t--){

    int n,k,s,rem,result;
    int sum = 0;
    cin>>n>>k>>s;

    for (int i = 1; i <n*2; i=i+2){

        sum = sum + i;

    }

    rem = s - sum;

    result = (rem)/(k-1);

    cout<<result<<endl;





}

return 0;
}