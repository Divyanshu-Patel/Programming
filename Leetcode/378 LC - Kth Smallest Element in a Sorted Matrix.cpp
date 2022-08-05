class Solution {
public:
    
    int solve(vector<vector<int>>& matrix, int mid){
        
        int n = matrix.size();
        int count = 0;
        int j = 0;
        int i = n-1;
        
        while(i>=0 && j<n){
            
            if(matrix[i][j] <= mid){
                count += i+1;
                j++;
            }
            
            else{
                i--;
            }
            
        }
        
        return count;
        
    }
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n =  matrix.size();
        int high = matrix[n-1][n-1];
        int low = matrix[0][0];
        
        while(high>low){
            
            int mid = low + (high-low)/2;
            
            int pos = solve(matrix, mid);
            
            if(pos<k){
                low = mid + 1;
            }
            
            else{
                high = mid;
            }
        }
        
        return low;
        
    }
};