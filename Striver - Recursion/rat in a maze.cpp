class Solution{
    
    public:
        void solve(int i, int j, int di[], int dj[], vector<string> &ans, vector<vector<int>> &m, int n, vector<vector<int>> &visited, string move){
            if(i==n-1 && j==n-1){
                ans.push_back(move);
                return;
            }
            
            string direction = "DLRU";
            for(int index=0; index<4; index++){
                int nexti = i+di[index];
                int nextj = j+dj[index];
                if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && visited[nexti][nextj] == 0 && m[nexti][nextj] == 1){
                    visited[i][j] = 1;
                    solve(nexti, nextj, di, dj, ans, m, n, visited, move + direction[index]);
                    visited[i][j] = 0;
                }
            }
        }
        
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> visited(n, vector<int>(n,0));
        int di[]={1,0,0,-1};
        int dj[]={0,-1,1,0};
        if(m[0][0] == 1){
            solve(0,0,di,dj,ans,m,n,visited,"");
            return ans;
        }
    }
};

    
