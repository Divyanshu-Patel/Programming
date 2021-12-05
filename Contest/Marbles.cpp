#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, count = 0;
        cin>>n;

        string str1;
        string str2;
        cin>>str1>>str2;

        if(str1==str2){
            cout<<"O"<<endl;
        }

        else{
            for(int i = 0; i<n; i++){
                if(str1[i] == '?' && str2[i] == '?'){
                    continue;
                }

                else if(str2[i] == '?' && str1[i] != '?') {
                    replace(str1.begin(), str1.end(), '?', str2[i]);
                    break;
                }

                else if(str1[i] == '?' && str2[i] != '?'){
                    replace(str2.begin(), str2.end(), '?', str1[i]);
                    break;
                }
            }

        for(int i = 0; i <n ; i++){
            if(str1[i] != str2[i]){
                if((str1[i] == 'a' && (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')){
                    count = count + 1;
                }

                else if((str1[i] == 'e' && (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')){
                    count = count + 1;
                }

                else if((str1[i] == 'i' && (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')){
                    count = count + 1;
                }
                
                else if((str1[i] == 'o' && (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')){
                    count = count + 1;
                }

                else if((str1[i] == 'u' && (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')){
                    count = count + 1;
                }

                else if((str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u') && (str2[i] != 'a' || str2[i] != 'e' || str2[i] != 'i' || str2[i] != 'o' || str2[i] != 'u')){
                    count++;
                }

                else{
                    count = count +1;
                }
                }

            }
            

        cout<<count<<endl;
        }

    }
    return 0;
}