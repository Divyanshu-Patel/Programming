#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    int n,sum=0;

    map<char, int> m;
    m.insert({ 'I', 1 });
    m.insert({ 'V', 5 });
    m.insert({ 'X', 10 });
    m.insert({ 'L', 50 });
    m.insert({ 'C', 100 });
    m.insert({ 'D', 500 });
    m.insert({ 'M', 1000 });

    int len = str.length();

    for(int i = 0; i<len;){
        if(i == (len-1) || m[str[i]] >= m[str[i+1]]){
            n = m[str[i]];
            i++;
        }

        else{
            n = m[str[i+1]] - m[str[i]];
            i = i+2;
        }

        sum = sum + n;
    }

    cout<<sum<<endl;

    return 0;
}