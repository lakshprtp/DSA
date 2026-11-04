class Solution {
public:
int n;
vector<vector<int>>ans;
void solve(int start,vector<int>&curr,vector<int>&nums,int target){
    if (target==0){
        ans.push_back(curr);
        return;

    }

    for(int i =start;i<n;i++){
        if(target<nums[i]){
            break;
        }

        curr.push_back(nums[i]);
        solve(i,curr,nums,target-nums[i]);
        curr.pop_back();


    }
}

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        n=nums.size();
        vector<int>curr;
        sort(nums.begin(),nums.end());
        solve(0,curr,nums,target);
        return ans;
    }
};