#include<bits/stdc++.h>
using namespace std;


void printmergedarray(int a[], int b[], int n, int m){

    int arr[n+m];
    int first=0;
    int second=0;

    for(int i=0;i<n+m;i++){
        if(first<n && second<m){
            if(a[first]<b[second]){
                arr[i]=a[first];
                first++;
            }
            else{
                arr[i]=b[second];
                second++;
            }
    
        }

        else if(first<n){
            arr[i]=a[first];
            first++;
        }

        else{
            arr[i]=b[second];
            second++;
        }
    }

    for(int i = 0; i<n+m; i++){
        cout<<arr[i]<<endl;
    }


}
int main(){
int a[]={3,4,6,4,6,2};
int b[]={6,5,2,3,5,3};
sort(a, a+6);
sort(b,b+6);

printmergedarray(a,b,6,6);
return 0;
}