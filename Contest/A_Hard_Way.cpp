#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        double ans = 0;

        if(y1==y2 & y1!=0 & y3<y1){

            ans=abs(x2-x1);
            cout<<fixed<<setprecision(10)<<ans<<endl;
            
        }

        else if(y2==y3 & y2!=0 & y1<y2){

            ans=abs(x2-x3);
            cout<<fixed<<setprecision(10)<<ans<<endl;
            
        }

        else if(y1==y3 and y3!=0 and y2<y1){

            ans=abs(x1-x3);
            cout<<fixed<<setprecision(10)<<ans<<endl;

        }

        else{
            cout<<fixed<<setprecision(10)<<ans<<endl;
        }

    }
    

    return 0;
}