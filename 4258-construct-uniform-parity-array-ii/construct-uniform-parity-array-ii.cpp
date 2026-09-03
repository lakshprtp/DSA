class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int so=INT_MAX;
        for(auto x: nums1){
            if(x%2==1){
                so=min(so,x);
            }
        }

        for(auto x:nums1){
            if(x%2==0&&so!=INT_MAX&&x<so){
                return false;
            }
        }

        return true;
    }
};