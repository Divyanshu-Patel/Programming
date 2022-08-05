class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*
        
        if(matrix.size()==0) return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int row = 0;
        int col = m-1;
        
        while(row<n && col>=0){
    
            if(matrix[row][col] > target) col--;
            
            else if(matrix[row][col] < target) row++;
            
            else{ return true; }
        }
        
        return false;
        
        
        
        BRUTE FORCE */ 
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==target) return true;
            }
        }
        
        return false;
        
    }
};