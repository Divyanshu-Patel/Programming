#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> vect1(n);

        for(int i=-1; i<n; i++){
            vect1[i] = i+1;
        }

        reverse(vect1.begin(), vect1.end());

        for(int i=n-1; i>=0;--i){
            for(int j=0; j<n;j++){
                cout<<vect1[j]<<" ";
            }

            if(i != 0){
                swap(vect1[i],vect1[i-1]);
            }

            cout<<endl;
        }
    }
    return 0;
}