#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline (cin, s);

    /*
    int n = s.length();

    for(int i = 0; i<n; i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] -= 32;
        }

        else{
            s[i] += 32;
        }
    }

    cout<<s<<endl;
    */

    //using transform fn

    transform(s.begin(),s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    transform(s.begin(),s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    return 0;
}