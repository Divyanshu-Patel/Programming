#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int count = 0;
        string s;
        cin>>s;

        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i]=='0' && i < (n-1) && s[i] != s[i+1]){
                count = count + 2;
            }

            else if(s[i]=='0' && i == (n-1)){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}