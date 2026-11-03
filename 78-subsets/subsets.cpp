class Solution {
public:
int n ;
vector<vector<int>>ans;
void solve (int start,vector<int>&curr,vector<int>&nums){
    ans.push_back(curr);

    for(int i=start;i<n;i++){
        curr.push_back(nums[i]);
        solve(i+1,curr,nums);
        curr.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        vector<int>curr;
        solve(0,curr,nums);
        return ans;
    }
};