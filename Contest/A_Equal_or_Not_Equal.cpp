#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;

    while(t--){
    string s;
    cin>>s;

    int len = s.length();
    int count = 0;

    if(len>=2){
        for(int i = 0; i < len; i++){
            if(s[i] == 'N'){
                count++;
                }
            }
    }

    if(count == 1){
            cout<<"NO"<<endl;
        }

    else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}
