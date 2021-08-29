#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,k,i;
        cin>>n>>k;
        long a[n],neg[k],n2[n];
        long s = 0;
        long s2=0;
        
        memset(n2,0,sizeof(n2));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }    
        
        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                s = s+a[i];
            }
            else
            {
                n2[i]=a[i];
            }
        }      

       sort(n2,n2+n);
       for(i=0;i<k;i++)
       {
         neg[i]=n2[i];
       }
       for(i=0;i<k;i++)
       {
           neg[i]=neg[i]*(-1);
           s2+=neg[i];
       }
       long ans = s+s2;
       cout<<ans<<"\n";
        
    }
    return 0;
}