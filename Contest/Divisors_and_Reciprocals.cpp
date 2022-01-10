#include <bits/stdc++.h>
using namespace std;


long long divSum(long long n)
{
    if (n == 1){
        return 1;
    }
        
    long long result = 0;

    
    for (long long i = 2; i <= sqrt(n); i++)
    {
        
        if (n % i == 0)
        {
            
            if (i == (n / i)){
                result += i;
            }
                
            else{
                result += (i + n / i);
            }
                
        }
    }

    
    return (result + n + 1);
}

void solve() {

    long long x, a, b;
    cin >> x >> a >> b;
    if (((x * b) / a) <= x and (divSum((x * b) / a) == x)){
        cout << (x * b) / a << endl;
    }
        
    else{
        cout << -1 << endl;
    }
        
}

int main() {
    
    long long t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}