#include<bits/stdc++.h>
using namespace std;

void printsubseq(int index, vector<int> &ds, int s, int sum, int arr[], int n){
    
    if(n==index){
        if(s==sum){
            for(auto ele:ds){
                cout<<ele<<" ";
            }

            cout<<endl;
        }

        return;
    }

    ds.push_back(arr[index]);
    s += arr[index];

    printsubseq(index+1,ds,s,sum,arr,n);

    s -= arr[index];
    ds.pop_back();

    printsubseq(index+1,ds,s,sum,arr,n);

}



int main(){

    int n, sum;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>sum;

    vector<int> ds;
    
    printsubseq(0, ds, 0, sum, arr, n);

    return 0;
}