#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int rows = 0, cols = 0, rowe = n-1, cole = m-1;

    while(rows <= rowe && cols <= cole){

        for(int col = cols; col <= cole; col++){
            cout<<arr[rows][col]<<" ";
        }

        rows++;
        

        for(int row = rows; row <= rowe; row++){
            cout<<arr[row][cole]<<" ";
        }

        cole--;

        for(int col = cole; col>=cols; col--){
            cout<<arr[rowe][col]<<" ";
        }

        rowe--;

        for(int row = rowe; row>=rows; row--){
            cout<<arr[row][cols]<<" ";
        }

        cols++;

    }
    
    return 0;
}