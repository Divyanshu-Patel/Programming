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

    int r = 0; 
    int c = n-1;
    bool found = false;

    while(r<n && c>=0){
        
        if(arr[r][c] == nm){
            found = true;
        }

        if(arr[r][c] > nm){
            c--;
        }

        else{
            r++;
        }
    }

    if(found){
        cout<<"element found"<<endl;
    }

    else{
        cout<<"no"<<endl;
    }


    return 0;
}