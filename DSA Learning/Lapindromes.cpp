#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        

        string s;
        cin>>s;

        int len = s.length();
        if(len%2==0){

            string one = "";
            string two = "";

            for(int i = 0; i < len/2; i++){
                one += s[i];
            }

            for(int i = len/2; i < len; i++){
                two += s[i];
            }

            sort(one.begin(),one.end());
            sort(two.begin(),two.end());
            if(one==two){
                cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }
        }

        else{
            string one = "";
            string two = "";

            for(int i = 0; i < len/2; i++){
                one += s[i];
            }

            for(int i = (len+1)/2; i < len; i++){
                two += s[i];
            }

            sort(one.begin(),one.end());
            sort(two.begin(),two.end());
            if(one==two){
                cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }
        }
        }
    
    return 0;
}