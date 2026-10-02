class Solution {
public:
vector<string>ans;
    void solve (string curr,int open,int close){
        if(open==0&&close==0){
            ans.push_back(curr);
        }

        if (open>0){
            solve(curr+'(',open-1,close);
        }

        if (close>open){
            solve(curr+')',open, close-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        
        solve("",n,n);
        return ans;
    }
};