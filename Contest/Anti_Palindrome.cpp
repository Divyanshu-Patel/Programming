#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        sort(s.begin(), s.end());

        reverse(s.begin() + (n / 2), s.end());

        if(n%2 != 0){
            cout<<"NO"<<endl;
        }

        else{
           bool exist = true;
           for(int i = 0; i < n-1; i++){
              if(s[i] == s[n-1-i]){
                 exist = false;
              }
           }

           if(exist){
              cout<<"YES"<<endl;
              cout<<s<<endl;
           }

           else{
              cout<<"NO"<<endl;
           }
        }
    }

    return 0;
}