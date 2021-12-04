#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s,max,min;
        cin>>n;

        vector<int> v;
        vector<int> x;

        for(int i = 0; i < n; i++){
            cin>>s;
            v.push_back(s);
        }

        x = v;
        sort(x.begin(),x.end());

        max = x[n-1];
        min = x[0];
        
        if(max==min){
            cout<<0;
        }

        else if(v[n-1]==max){
            cout<<1;
        }

        else{
            cout<<2;
        }

        cout<<endl;
    }

    return 0;
}