class Solution {
public:
    bool isValid(string s) {
        vector<char> ans;
       
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                ans.push_back(')');
            }
            else if(s[i]=='{'){
                ans.push_back('}');
            }
            else if(s[i]=='['){
                ans.push_back(']');
            }
            
            else{
                if(ans.size()==0){
                    return false;
                }
                
                else if(s[i]==ans[ans.size() - 1]){
                ans.pop_back();
                }
                
                else{
                    return false;
                }
            }
            
        }
        if(ans.size()==0){
            return true;
        }
        
        else{
            return false;
        }
    }
};