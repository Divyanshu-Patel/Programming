#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long w,h;
        cin>>w>>h;

        long long k1;
        cin>>k1;
        vector<int> v1(k1);

        for(int i=0; i<k1; i++) {cin>>v1[i];}

        long long k2;
        cin>>k2;
        vector<int> v2(k2);

        for(int i=0; i<k2; i++) {cin>>v2[i];}

        long long k3;
        cin>>k3;
        vector<int> v3(k3);

        for(int i=0; i<k3; i++) {cin>>v3[i];}

        long long k4;
        cin>>k4;
        vector<int> v4(k4);

        for(int i=0; i<k4; i++) {cin>>v4[i];}

        long long area1 = (v1[k1-1] - v1[0]) * h;
        long long area2 = (v2[k2-1] - v2[0]) * h;
        long long area3 = (v3[k3-1] - v3[0]) * w;
        long long area4 = (v4[k4-1] - v4[0]) * w;
        cout<<max(area1,max(area2,max(area3,area4)))<<"\n";


    }

    return 0;
}


