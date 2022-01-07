#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        unordered_set <long long> temp;
        for(int i=0; i<n; i++){
            temp.insert(arr[i]);
            
        }
        
        long long distinct = temp.size();
        for(int i=0; i<n; i++){
            if((i+1)<=distinct){
                cout<<distinct<<" ";
            }
            else{
                cout<<i+1<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}