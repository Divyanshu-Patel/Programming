class Solution {
public:
    
    vector<int> frequ(string s){
        vector<int> freq(26,0);
        for(int i = 0; i<s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        return freq;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        vector<string> ans;
        vector<int> freqw2(26,0);
        for(auto x: words2){
            vector<int> freq = frequ(x);
            for (int i=0; i<26; i++){
                freqw2[i] = max(freq[i], freqw2[i]);
            }
        }
        
        for(auto x: words1){
            vector<int> frequency = frequ(x);
            bool flag = true;
            
            for(int i = 0; i < 26; i++)
            {
                if(frequency[i] < freqw2[i])
                {
                    flag = false;
                    break;
                }
                
                
            }
            
            if(flag == true) ans.push_back(x);
        }
        
        return ans;
        
    }
};