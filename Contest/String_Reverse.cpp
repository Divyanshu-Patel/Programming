#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;

     while(t--){
         string s;
         cin>>s;
         long long n = s.length();

         string revS = string(s.rbegin(),s.rend());
         long long start = 0, ans = 0;

         for(int j = 0; j<n; j++){
             if(revS[start]!=s[j]){
                 s+=s[j];
                 ans++;
             }

             else{
                 start++;
             }
         }

         cout<<ans<<endl;
     }

    return 0;
}