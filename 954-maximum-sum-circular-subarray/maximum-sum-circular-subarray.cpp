class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int tsum=0;
        int ssum=0;
        int maxsum=INT_MIN;
        int minsum=INT_MAX;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxsum=max(sum,maxsum);

            ssum+=nums[i];
            minsum=min(ssum,minsum);

            if (ssum>0){
                ssum=0;
            }

            if (sum<0){
                sum=0;
            }

            tsum+=nums[i];
        }
        if (tsum==minsum) return maxsum;

        return max(tsum-minsum,maxsum);
    }
};