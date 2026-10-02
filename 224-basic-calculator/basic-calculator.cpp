class Solution {
public:
    int calculate(string s) {
        long long result=0;
        long long  num=0;
        int sign=1;
        stack<int>st;
        for(int i =0;i<s.size();i++){
            if (isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            if (s[i]=='+'){
                result+=num*sign;
                num=0;
                sign=1;
            }

            if (s[i]=='-'){
                result+=num*sign;
                num=0;
                sign=-1;
            }

            if (s[i]=='('){
                st.push(result);
                st.push(sign);
                result=0;
                num=0;
                sign=1;
            }

            if (s[i]==')'){
                result+=num*sign;
                num=0;
                int prevsign=st.top();
                st.pop();
                int prevnum=st.top();
                st.pop();

                result=result*prevsign+prevnum;

            }
           }

           result+=sign*num;
           return result;
        
    }
};