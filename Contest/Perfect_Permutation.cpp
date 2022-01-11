#include<bits/stdc++.h>
using namespace std;

void ques()
{
    long long n, k;
    cin >> n >> k;
    vector<int> vector1;

    for (long long i = 1; i <= n; i++){
        vector1.push_back(i);
    }

    if (n == 1){
        cout << 1 << endl;return;
    }

    if (k == n - 1){
        swap(vector1[0], vector1[1]);

        for (auto e : vector1)
        {
            cout << e << " ";
        }
        cout << endl;return;
    }

    long long sw = 0;
    k = n - k;
    while (k--){
        swap(vector1[sw], vector1[sw + 1]);sw++;
    }
    
    for (auto e : vector1){
        cout << e << " ";
    }
    
    cout<<endl;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        ques();
    }
}