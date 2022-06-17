#include<bits/stdc++.h>
using namespace std;

//call by refernce

void doswap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    cin>>a>>b;

    int *aptr = &a;
    int *bptr = &b;

    doswap(&a, &b); //swap using address

    doswap(aptr, bptr); //swap using pointers

    doswap(&a, &b); //swap using address

    cout<<a<<" "<<b;

    return 0;
}