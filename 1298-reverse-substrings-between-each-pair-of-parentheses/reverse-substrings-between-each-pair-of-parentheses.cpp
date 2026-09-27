class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        string ans="";
        

        for(int i =0;i<s.size();i++){
            if(s[i]==')'){
                
                string curr="";
                while(!st.empty()&&st.top()!='('){
                    curr+=st.top();
                    st.pop();

                }
                st.pop();
                
                for(int i =0;i<curr.size();i++){
                    st.push(curr[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
    }

    reverse(ans.begin(),ans.end());

    return ans;

    }
};