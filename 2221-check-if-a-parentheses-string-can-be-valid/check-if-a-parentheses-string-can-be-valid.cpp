class Solution {
public:
    bool canBeValid(string s, string locked) {
        int left=0,right=0;
        int n=locked.size();
        if (n%2==1) return false;
        for(int i =0;i<n;i++){
            if (locked[i]=='0' || s[i]=='('){
                left++;
            }

            else{
                right++;

            }

            if (right>left) return false;

        }

        left=right=0;
        for(int i =n-1;i>=0;i--){
            if (locked[i]=='0' || s[i]==')'){
                right++;
            }

            else{
                left++;
            }

            if (left>right) return false;
        }

        return true;
    }
};