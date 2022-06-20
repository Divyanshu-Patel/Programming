#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b){

    int c=0;

    while(b != 0){

        c = a%b;
        a = b;
        b = c;

    }

    cout<<a<<endl;

}

int main(){

    int a, b;
    cin>>a>>b;

    hcf(a,b);

    return 0;
}