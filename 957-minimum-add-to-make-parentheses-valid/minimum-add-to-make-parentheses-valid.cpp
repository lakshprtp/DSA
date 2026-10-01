class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance=0;
        int ans=0;
        for(int i =0;i<s.size();i++){
            if (s[i]=='(' && balance <0){
                ans=ans+(-balance);
                balance=0;
                
            }
            
            if (s[i]=='('&& balance>=0){
                balance++;
            }
            else{
                balance--;
            }
        }

        return ans+abs(balance);
    }
};