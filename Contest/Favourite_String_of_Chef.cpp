#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        string s1 = "code";
        string s2 = "chef";

        int index1, index2;

        index1 = s.find(s1);
        index2 = s.find(s2);

        if(index1 < index2){
            cout<<"AC"<<endl;
        }

        else{
            cout<<"WA"<<endl;
        }

    }
    
    return 0;
}