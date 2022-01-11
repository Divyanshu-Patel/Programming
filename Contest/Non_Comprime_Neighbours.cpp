#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        long long arr[n+1];
        arr[n]=1;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        bool check = true;
        for(int i = 0; i<n; i++){
            if(check){
                arr[i] = arr[i+1]*4;
                i++;
            }
            else{
                arr[i] = arr[i-2]*4;
            }

            check =! check;
        }

        for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;

    }

    return 0;
}