class Solution {

public:
    void queen(int col, vector<vector<string>> &ans, vector<string> &board, vector<int> &left, vector<int> &ld, vector<int> &ud, int n){
        
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(left[row]==0 && ld[row + col]==0 && ud[n-1 + col-row]==0){
                board[row][col] = 'Q';
                left[row]=1;
                ld[row + col]=1;
                ud[n-1 + col-row]=1;
                queen(col+1,ans,board,left,ld,ud,n);
                board[row][col] = '.';
                left[row]=0;
                ld[row + col]=0;
                ud[n-1 + col - row]=0;
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i] = s;
        }
        vector<int> left(n,0), ld(2*n-1,0), ud(2*n-1,0);
        queen(0, ans, board, left, ld, ud, n);
        return ans;
    }
};