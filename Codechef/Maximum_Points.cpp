#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int x,y,z;
    int a,b,c;
    cin>>a>>b>>c; // time
    cin>>x>>y>>z; // score
    int ans=-1;
    for(int x1=0;x1<=20;++x1)
    {
        for(int x2=0;x2<=20;++x2)
        {
            for(int x3=0;x3<=20;++x3)
            {
                // x1 questions a x2 questions b x3 questions c
                if(x1*a+x2*b+x3*c<= 240)
               {
                   ans= max(ans,x*x1+y*x2+z*x3);
               } 
            }
        }
    }
    cout<<ans<<"\n";
    }
}