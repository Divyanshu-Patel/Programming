#include<bits/stdc++.h>
using namespace std;

void perm (string s, string ans){

    if(s.length() == 0){
        cout<<ans<<endl;
    }

    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);

        perm(ros, ans+ch);
    }

}


int main(){

    string s;
    cin>>s;

    string ans = "";

    perm(s, ans);

    return 0;
}