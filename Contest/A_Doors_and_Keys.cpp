#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int r,g,b;

        r=0; g=0; b=0;
        int ans = 1;

        for(auto x:s){
            if(x=='R'){
                if(r==0){
                    ans=0;
                }
            }

            else if(x=='G'){
                if(g==0){
                    ans=0;
                }
            }

            else if(x=='B'){
                if(b==0){
                    ans=0;
                }
            }

            else if(x=='r'){
                r++;
            }

            else if(x=='g'){
                g++;
            }

            else if(x=='b'){
                b++;
            }
        }

        if(ans==1){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}