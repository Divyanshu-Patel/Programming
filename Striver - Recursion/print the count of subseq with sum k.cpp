#include<bits/stdc++.h>
using namespace std;

int sumk(int index, int s, int sum, int arr[], int n){


    if(index==n){

        if(s==sum){
            return 1;
        }

        else return 0;
    }

    s += arr[index];
    int l = sumk(index+1, s, sum, arr, n); 

    s -= arr[index];
    int r = sumk(index+1, s, sum, arr, n);

    return l+r;

}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum;
    cin>>sum;

    cout<<sumk(0, 0, sum, arr, n);

    return 0;
}