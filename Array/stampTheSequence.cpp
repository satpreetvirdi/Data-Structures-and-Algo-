class Solution {
public:
    vector<int> ans;
    int n,m;
    
    bool empty(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]!='?')
                return false;
        }
        return true;
    }
    
    int solve(string stamp, string &target){
        for(int i=0;i<=m-n;i++){
            bool p=true,q=true;
            for(int j=0;j<n;j++){
                if(stamp[j]!=target[i+j] && target[i+j]!='?'){
                    p=false;
                    break;
                }
                else if(target[i+j]!='?'){
                    q=false;
                }
            }
            if(p && !q){
                for(int j=0;j<n;j++)
                    target[i+j]='?';
                return i;
            }
        }
        return -1;
    }
    
    vector<int> movesToStamp(string stamp, string target) {
        vector<int> ans;
        n=stamp.size();
        m=target.size();
        while(!empty(target)){
            int k=solve(stamp,target);
            if(k==-1)
                return {};
            ans.push_back(k);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};