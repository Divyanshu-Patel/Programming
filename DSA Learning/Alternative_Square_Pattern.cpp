#include <iostream>
using namespace std;

int main(){
    int n;
    int a = 0;
    int b = 11; 
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0){

            for(int j=1; j<=5; j++){

                cout<<++a<<" ";
                
            }
        a += 5;
        cout<<endl;
        }

        else{
            
            for(int j=1; j<=5; j++){

                cout<<--b<<" ";
                
            }
        b += 15;
        cout<<endl;
        }
        
    
    }
    return 0;
}