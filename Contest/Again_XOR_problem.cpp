#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,k;
        string str;

        cin>>n>>k;
        cin>>str;

        long long a[n];
        long long arr[k];
        long long sm = 0;

        for(long long i = 0; i < n; i++){
            if(str[i] == '1'){
                sm++;
            }
            a[i] = sm;
        }

        long long f = n-k;
        long long p = f+1;

        arr[0] = a[p-1];
        for(long long i = 1; i < k; i++){
            arr[i] = a[i+p-1] - a[i-1];
        }

        long long cnt = 0;
        for(long long j = 0; j < k; j++){
            if(arr[j]%2==1){
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}