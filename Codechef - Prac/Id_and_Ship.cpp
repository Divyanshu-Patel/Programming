#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin>>n;

        if(n == "B" || n == "b"){
            cout<<"BattleShip"<<endl;
        }

        else if(n == "C" || n == "c"){
            cout<<"Cruiser"<<endl;
        }

        else if(n == "F" || n == "f"){
            cout<<"Frigate"<<endl;
        }

        else{
            cout<<"Destroyer"<<endl;
        }
    }

    return 0;
}