class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        //check all elements are even;
        bool even =true;
        for(auto x: nums1){
            if(x%2==1) even =false;
        }

        if (even ==true) return true;

        // odd,mix(odd+even)
        int mn=*min_element(nums1.begin(),nums1.end());
        if(mn%2==1){
            return true;
        }

        return false;

    }
};