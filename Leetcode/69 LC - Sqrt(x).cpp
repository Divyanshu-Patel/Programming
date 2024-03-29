class Solution {
public:
    int mySqrt(int x) {
        
        /* BRUTE
        
        long long i=0;
        
        while(i*i<=x)i++;
        
        return i-1;
        
        */
        
        long long s = 0, e=INT_MAX, ans = 0;
        while(s<=e){
            long long m = s + (e-s)/2;
            if(m*m <= x){
                ans = m;
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        
        return ans;
    }
};