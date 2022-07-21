class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum = 0;
        int product = 1;
        int value;
        while(n!=0){
            
            value = n%10;
            sum += value;
            product *= value;
            
            n = n/10;
            
        }
        
        int ans = product - sum;
        return ans;
        
    }
};