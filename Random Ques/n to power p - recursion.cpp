#include<bits/stdc++.h>
using namespace std;

int powe(int n, int p){

    if(p==0){
        return 1;
    }

    int prevpowe = powe(n, p-1);
    return n*prevpowe;

}

int main(){
    int n, p;
    cin>>n>>p;

    cout<<powe(n, p)<<endl;
    
    return 0;
}