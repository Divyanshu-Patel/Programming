#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int csum = 0;
    int maxS = INT_MIN;

    for(int i = 0; i<n; i++){
        csum += a[i];
        if(csum<0){
            csum = 0;
        }

        maxS = max(maxS, csum);
    }

    cout<<maxS;

    return 0;
}