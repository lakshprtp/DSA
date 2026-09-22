class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size()>1){
            vector<int>arr;
            int flag=0;
            for(int i =1;i<nums.size();i+=2){
                if(flag%2==0) {
                    arr.push_back(min(nums[i-1],nums[i]));
                }
                else{
                    arr.push_back(max(nums[i-1],nums[i]));
                }
                flag++;
        }
        nums=arr;
        }
        return nums[0];
    }
};