#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int a1[n1];
    int a2[n2];

    for(int i=0; i<n1; i++){
        a1[i] = arr[left+i];
    }

    for(int i=0; i<n2; i++){
        a2[i] = arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=left;

    while(i<n1 && j<n2){
        if(a1[i] < a2[j]){
            arr[k]=a1[i];
            k++;
            i++;
        }

        else{
            arr[k]=a2[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k]=a1[i];
        k++;
        i++;
    }

    while(j<n2){
        arr[k]=a2[j];
        k++;
        j++;
    }
}

void drivercode(int arr[], int left, int right){
    if(left<right){
        int mid = left + (right-left)/2;

        drivercode(arr,left,mid);
        drivercode(arr,mid+1,right);

        sort(arr,left,mid,right);
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    drivercode(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
