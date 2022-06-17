#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline (cin, s); //important

    int n = s.length();
    int len = 0;
    int temp = 0;


    for(int i = 0; i<n; i++){

        if(s[i] != ' '){
            len++;
        }

        else{
            temp = max(temp, len);
            len = 0;
        }
    }

    int ans;
    ans = max(temp,len);

    cout<<ans<<endl;

    return 0;
}