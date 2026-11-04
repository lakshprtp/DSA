class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0;
        int ssum=0;
        int maxsum=INT_MIN;
        int minsum=INT_MAX;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            ssum+=nums[i];
            minsum=min(minsum,ssum);

            maxsum=max(maxsum,sum);
            if (sum<0){
                sum=0;
            }

            if (ssum>0){
                ssum=0;
            }
        }

        return max(abs(minsum),maxsum);
    }
};