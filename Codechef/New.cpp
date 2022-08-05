#include<bits/stdc++.h>
using namespace std;

void code(){
    long long n;
    cin>>n;
    long long count=0;

    vector<long long> v(n);

    for(long long i=0; i<n; i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    long long sum=0;
    for(long long i=0; i<n; i++)
    {
        sum = sum+v[i];
    }
    if(v[0]==v[v.size()-1])
    {
        cout<<0<<endl;
        return;
    }
    
    for(long long i=v.size()-1;i>=0;i--)
    {
        if((sum/(i+1))<v[i])
        {
            count++;
        }
    }
    cout<<min(n-1,count)<<endl;
}

int main(){ 
    
    long long t;
    cin>>t;
    while(t--)
        {
        code();
    }  
return 0;
}