class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n =nums.size();
        vector<int>minarr(n);
        int curr=INT_MAX;
        
        for (int i =n-1;i>=0;i--){
            curr=min(nums[i],curr);
            minarr[i]=curr;
        }

        int maxi=INT_MIN;
        for(int i =0;i<n;i++){
            maxi=max(nums[i],maxi);
            int score=maxi-minarr[i];
            if(score<=k){
                return i;
            
            }
        }
        return -1;
    }
};