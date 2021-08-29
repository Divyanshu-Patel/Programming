#include<bits/stdc++.h> 

using namespace std; 
int main(){ 
    long t,n,k,i; 
    cin>>t; 
    while(t--){ 
        cin>>n>>k; 
        k--; 
        vector<long>v(n); 
        long mx=INT_MIN; 
        map<long,long>mp; 
        for(i=0; i<n; i++){ 
            cin>>v[i]; 
            mx = max(mx, v[i]); 
        } 
        long c=0; 
        for(i=0; i<n; i++){ 
            long x = i+k; 
            //cout<<x<<" "<<v[x]<<"\n"; 
            if(x<n && v[x]==mx){ 
                //cout<<x<<" <== \n"; 
                c+=(n-x); 
            } 
        } 
        cout<<c<<"\n"; 
    } 
}