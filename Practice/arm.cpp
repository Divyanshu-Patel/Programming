#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int sum = 0;
    int ori = n;
    while ( n > 0){
        int last = n%10;
        sum += last*last*last;
        n = n/10;

    }
    //Divyanshu Patel
    //hello Divyanshu

    if(sum==ori){
        cout<<"A";
    }

    else {
        cout<<"N";
    }

    return 0;
}