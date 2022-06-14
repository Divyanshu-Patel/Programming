#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, num;
    cin>>x;
    int rem, rev=0;

    num = x;

    if(x<0){
        cout<<"False"<<endl;
    }

    else{
        while( num != 0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }

    if(rev == x){
        cout<<"True"<<endl;
    }

    else{
        cout<<"False"<<endl;
    }
    }
    

    return 0;
}