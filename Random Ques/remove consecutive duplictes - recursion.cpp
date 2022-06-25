#include<bits/stdc++.h>
using namespace std;

void duplic(string s){

    if(s.length()==0){
        return;
    }

    if(s[0]==s[1]){
        duplic(s.substr(1));
    }

    else{
        cout<<s[0];
        duplic(s.substr(1));
    }

}

int main(){

    string s;
    cin>>s;

    duplic(s);

    return 0;
}