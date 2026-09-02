class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2);
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]=i;
        }

        for(int i =0;i<nums.size();i++){
            int num=target-nums[i];
            if(mp.find(num)!=mp.end()&& mp[num]!=i){
                ans[0]=i;
                ans[1]=mp[num];
                return ans;

            }
        }
        return ans;
    }
};