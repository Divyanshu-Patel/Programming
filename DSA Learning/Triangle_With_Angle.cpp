#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, s, area;
    cin>>a>>b>>c;

    s = (a+b+c)/2;
    area = sqrt((s*(s-a)*(s-b)*(s-c)));
    

    if(a+b+c==180 && a!=0 && b!=0 && c!=0 ){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }

    return 0;
}