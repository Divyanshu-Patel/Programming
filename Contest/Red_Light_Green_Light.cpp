#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, count = 0;
        cin>>a>>b;

        int arr[a];
        for(int i = 0; i<a; i++){
            cin>>arr[i];
        }

        for(int i = 0; i < a; i++){
            if(arr[i] > b){
                count++;
            }

            else{
                continue;
            }
        }

        cout<<count<<endl;

    }

    return 0;
}