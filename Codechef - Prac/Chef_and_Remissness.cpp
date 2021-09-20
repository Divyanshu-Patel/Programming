#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x1, x2;
        cin>>x1>>x2;

        int d = max(x1,x2);

        cout<<d<<" "<<(x1+x2)<<endl;
    }

    return 0;
}