#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int count = 1;
    cin >> a;
    
    for (int i = 0; i < a; i++){
        
        for (int k=0; k <= i; k++){
            if(k==0 || i==0){
            count = 1;}

        else{
        count = count*(i-k+1)/k;}

        cout << count << " ";

        }

    cout << endl;

    }
    
    
  
    return 0; 
}