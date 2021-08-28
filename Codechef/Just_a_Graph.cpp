#include<bits/stdc++.h>

using namespace std;
long t,n,i;

long main(){
    
    cin>>t;
    while(t--){

        cin>>n;

        vector<long>vec(n);

        map<long,long>map1;
        long c=0;

        for(i=0; i<n; i++){

            cin>>vec[i];
            map1[vec[i]-i-1]++;
        }
        if(map1[vec[0]-1]==n){
            cout<<n<<endl;
        }else{
            cout<<"1"<<endl;
        }
        
    }

    return 0;
}



