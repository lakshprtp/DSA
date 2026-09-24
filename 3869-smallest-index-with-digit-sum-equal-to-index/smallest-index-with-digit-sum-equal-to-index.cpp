class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            int digitsum=0;
            string digit=to_string(nums[i]);
            for(int j =0;j<digit.size();j++){
                digitsum+=digit[j]-'0';
            }
            if(i==digitsum) return i;
        }
        return -1;
    }
};