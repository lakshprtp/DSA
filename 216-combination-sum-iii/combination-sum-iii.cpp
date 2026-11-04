class Solution {
public:

vector<vector<int>>ans;
void solve(int start,int k,int target,vector<int>&curr){
    if(target==0 && curr.size()==k){
        ans.push_back(curr);
        return;
    }

    for(int i =start;i<10;i++){

        if (target<i) break;

        curr.push_back(i);
        solve(i+1,k,target-i,curr);
        curr.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int target) {
        
        vector<int>curr;
        solve(1,k,target,curr);
        return ans;
    }
};