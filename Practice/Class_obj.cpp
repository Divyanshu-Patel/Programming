#include<bits/stdc++.h>
using namespace std;

class Geeks
{
    public:
    string geekname;
    int id;
     
    void printname(){
        cout << "Geekname is:" << geekname;
    }
    
    void printid()
    {
        cout << "Geek id is: " << id;
    }

    Geeks (){
        cout << "Default called" <<endl;
        id = -1;
    }

    Geeks (int x){
        cout << "P called" << endl;
        id = x;
    }

};
 

int main() {
     
    Geeks obj1;
    cout << "Geek id is: " <<obj1.id << endl;

    Geeks obj2(21);
    cout << "Geek id is: " <<obj2.id << endl;


    return 0;
}