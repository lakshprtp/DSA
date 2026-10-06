class Solution {
public:
    int minSwaps(string s) {
        int size=0;
        // count uska badhega jo [ complete nhi hua hai;
        for(int i =0;i<s.size();i++){
            if (s[i]=='['){
                size++;
            }
            if (size>0 && s[i]==']'){
                size--;
            }

        }
        return (size+1)/2;
    }
};