class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currmaxp=nums[0];
        int currminp=nums[0];
        int n =nums.size();
        int ans=nums[0];
        for(int i =1;i<n;i++){
            int v1=currmaxp*nums[i];
            int v2=currminp*nums[i];
            int v3=nums[i];

            currminp=min({v1,v2,v3});
            currmaxp=max({v1,v2,v3});
            ans=max(ans,currmaxp);
        }

        return ans;
    }
};