#include<bits/stdc++.h> 
using namespace std; 

class Solution
{

public:
    void myfunc(int index, int sum, vector<int> &arr, int N, vector<int> &ans){
        if(index==N){
            ans.push_back(sum);
            return;
        }

        myfunc(index+1, sum + arr[index], arr, N, ans);
        myfunc(index+1, sum, arr, N, ans);
    }

public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        myfunc(0,0,arr,N,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  