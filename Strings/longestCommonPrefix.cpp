class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string returnStr = "";
        
        for(int i = 1; i < strs.size(); i++){
            returnStr = "";
            for(int j = 0; j < strs[i].length(); j++){
                if(strs[0][j] == strs[i][j]){
                    returnStr += strs[0][j];
                } else {
                    break;
                }
            }
            strs[0] = returnStr;
        }
        
        return strs[0];
    };
    
};