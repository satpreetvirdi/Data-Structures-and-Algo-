class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> stack;
        
        stringstream ss(s);
        string word;
        while(ss >> word)
            stack.push(word);
        
        string ans;
        while(!stack.empty())
        {
            ans += " " + stack.top();
            stack.pop();
        }ac
        
        return ans.substr(1);
    }
};