#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, res = 0, sum = 0;
        cin>>n;

        if(n>2){
            while((n-sum)%2 == 0){
                sum += (n-sum)/2;
                res++;

            }

            cout<<res<<endl;
        }

        else{
            cout<<"0"<<endl;
        }

    }

    return 0;
}