class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()){
            return false;
        }
        
        
        /* Approach 1 - TC - NlogN
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        int x = s.compare(t);
        
        if(x == 0){
            return true;
        }
        
        else{
            return false;
        }
        
        
        Approach 2 -  TC - N
        
        
        int map_real[26] = {0};
        int map_second[26] = {0};
        
        for(char c: s){
            map_real[c - 'a']++;
        }
        
        for(char c: t){
            map_second[c - 'a']++;
        }
        
        for(int i=0; i<26; i++){
            if(map_real[i] != map_second[i]){
                return false;
            }
        }
        
        return true;
        
        
        Approach 3 - TC - N
        */
        
        
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        
        for(char c:s){
            mp1[c]++;
        }
        
        for(char c:t){
            mp2[c]++;
        }
        
        for(int i=0; i<s.size(); i++){
            if(mp1[s[i]] != mp2[s[i]]){
                return false;
            }
        }
        return true;
    }
};