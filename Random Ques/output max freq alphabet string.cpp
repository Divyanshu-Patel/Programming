#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int count = 0;
    int max = 0;
    int index;

    sort(s.begin(), s.end());

    int n = s.size();

    for(int i = 0; i<n; i++){
        if(s[i]==s[i+1]){
            count++;

            if(count>max){
                max = count;
                index = i;
            }
        }

        else if(s[i] != s[i+1]){
            continue;
        }
    }

    cout<<max<<" "<<s[index]<<endl;

    return 0;
} 