#include<bits/stdc++.h>
using namespace std;
    
    void solve(){
        long long n;
        cin>>n;

        string s = to_string(n);
        long long sum;
        for (long long i = 0; i < s.length(); i++) {
        sum = s[i] - '0' + s[i - 1] - '0';
        if (sum >= 10) {
            long long d1 = sum % 10;
            long long d2 = sum / 10;
            s[i] = (d1 + '0');
            s[i - 1] = (d2 + '0');
            cout << s << endl;
            return;
        }
    }
    sum = s[0] - '0' + s[1] - '0';
    s[1] = (sum + '0');
    cout << s.substr(1, s.size() - 1) << endl;
}

    int main(){
        long long t = 1;
        cin>>t;

        while(t--)
            solve();
            return 0;
    
    }