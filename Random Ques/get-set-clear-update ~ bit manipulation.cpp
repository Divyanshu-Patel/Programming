#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int pos;
    cin>>pos;

    int value;
    cin>>value;

    /* get bit
    if((n & (1<<pos)) != 0){
        cout<<1<<endl;
    }

    else{
        cout<<0<<endl;
    }

    
    set bit

    cout<<((n | (1<<pos)))<<endl;

    */


    int mask = ~(1<<pos); //clear bit
    n = (n & mask);

    cout<<((n | (value<<pos)))<<endl; //clear + set = update

    return 0;
}