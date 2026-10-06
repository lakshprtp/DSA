class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
       int left=0,right=0;
        int n=s.size();
        for(int i =0;i<n;i++){
            if (s[i]=='('){
                left++;
            }
            if (s[i]==')'){
                right++;
            }
            if (left<right){
                right=0;
                left=0;
                continue;
            }

            
                ans.push_back(s[i]);
          
            
            
        }

        left=right=0;
        string result="";
        for(int i =ans.size()-1;i>=0;i--){
            if (ans[i]=='('){
                left++;
            }
            if (ans[i]==')'){
                right++;
            }
            if (left>right){
                left=0;
                right=0;
                continue;
            }

            

            
                result.push_back(ans[i]);
            

        }

        reverse(result.begin(),result.end());
        return result;
    }
};