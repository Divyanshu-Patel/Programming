#include<bits/stdc++.h>
using namespace std;

bool pal(int i, string s){

    if(i>=s.length() / 2){
        return true;
    }
    
    if(s[0] != s[s.length() - i - 1]){
        return false;
    }

    return pal(i-1, s);

}

int main(){

    string s;
    cin>>s;

    cout<<pal(0, s);
    
    return 0;
}