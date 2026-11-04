class Solution {
public:
vector<vector<int>>ans;
int n ;
void solve (int start,vector<int>&curr,vector<int>&nums,vector<bool>&used){
    if(curr.size()==n){
        ans.push_back(curr);
        return;
    }

    for(int i=0;i<n;i++){
        if(used[i]) continue;

        used[i]=true;
        curr.push_back(nums[i]);
        solve(i+1,curr,nums,used);
        used[i]=false;
        curr.pop_back();


    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        n=nums.size();
        vector<int>curr;
        vector<bool>used(n,false);
        solve(0,curr,nums,used);
        return ans;
    }
};