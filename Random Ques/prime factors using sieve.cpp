#include<bits/stdc++.h>
using namespace std;
int N = 100000;

void sieve(int n){
    int spf[N+1];

    for(int i =2; i<=N; i++){
        spf[i]=i;
    }

    for(int i =2; i*i<=n; i++){
        if(spf[i]==i){
            for(int j = i*i; j<=n; j += i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
    while(n != 1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }

}

int main(){

    int n;
    cin>>n;

    sieve(n);

    return 0;

}
