class Solution {
public:
    
    string getpattern(string pattern){
        
        string ans;
        int j=0;
        
        map<char,char> mp;
        
        for(int i=0; i<pattern.size(); i++){
            if(mp.find(pattern[i]) == mp.end()){
                mp[pattern[i]] = 'a' + j;
                j++;
            }
            
            ans.push_back(mp[pattern[i]]);
        }
        
        return ans;
        
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        string pat = getpattern(pattern);
        vector<string> ans;
        
        for(int i=0; i<words.size(); i++){
            string p = getpattern(words[i]);
            if(p==pat){
                ans.push_back(words[i]);
            }
        }
        
        return ans;
        
    }
};