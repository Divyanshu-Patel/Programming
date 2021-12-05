#include<bits/stdc++.h>
using namespace std;

int main(){
    char a,b;
    cin>>a>>b;

    if(a == 'R' && b == 'B'){
        cout<<"R"<<endl;
    }

    else if(a == 'R' && b == 'R'){
        cout<<"R"<<endl;
    }

    else if(a == 'B' && b == 'B'){
        cout<<"B"<<endl;
    }

    else if(a == 'B' && b == 'R'){
        cout<<"R"<<endl;
    }

    else if(a == 'B' && b == 'G'){
        cout<<"B"<<endl;
    }

    else if(a == 'G' && b == 'B'){
        cout<<"B"<<endl;
    }

    else if(a == 'G' && b == 'G'){
        cout<<"G"<<endl;
    }

    else if(a == 'G' && b == 'R'){
        cout<<"R"<<endl;
    }

    else if(a == 'R' && b == 'G'){
        cout<<"R"<<endl;
    }




    return 0;
}