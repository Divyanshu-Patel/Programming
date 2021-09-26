#include<bits/stdc++.h>
using namespace std;

int main(){
    {
        int t;
        cin>>t;

        while(t--){

            int p,a,b,c,x,y;
            cin>>p>>a>>b>>c>>x>>y;

            int m,n;

            m = b + x*a;
            n = c + y*a;

            int s = min(m,n);

            if(s != 0){
                cout<<(p/s)<<endl;
            }
        }

    }
    return 0;
}