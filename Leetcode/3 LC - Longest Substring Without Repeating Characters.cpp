class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        /*APPROACH 1 -  BRUTE FORCE
        int n = s.length();
        
        if(n==0) return 0;
        
        if(n==1) return 1;
        
        int ans = 0;
        
        for(int i=0; i<n; i++){
            unordered_set <int> st;
            for(int j=i; j<n; j++){
                if(st.find(s[j]) != st.end()){
                    ans = max(ans,j-i);
                    break;
                }
                
                st.insert(s[j]);
                ans = max(ans, j-i+1);
            }
        }
        
        return ans;
        
        
        APPROACH 2 - OPTIMISED APPROACH
        */
        
        int n = s.length();
        
        if(n==0) return 0;
        
        if(n==1) return 1;
        
        int ans = 0;
        int left = 0;
        int right = 0;
        
        vector<int> mpx(256,-1);
        
        while(right < n){
            
            if(mpx[s[right]] != -1){
                left = max(left, mpx[s[right]]+1);
            }
            
            mpx[s[right]] = right;
            
            ans = max(ans, right - left + 1);
            right++;
            
        }
        
        return ans;
        
    }
};