#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, nm;
    cin>>n>>nm;

    int arr[n][n];

    for(int i = 0; i<n ; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
    
            if(arr[i][j] == nm){
                cout<<"found"<<endl;
                return 0;
            }

        }
 
    }

    cout<<"not found"<<endl;

    return 0;
}