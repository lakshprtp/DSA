class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //[3,1,1,2,3,3,3,3,3]

        int start = 0;
        int end = nums.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return true;
            if (nums[mid] == nums[start] && nums[mid] == nums[end]) {
                start++;
                end--;
                continue;
            }

            // left sorted
            if (nums[mid] >= nums[start]) {
                if (target >= nums[start] && nums[mid] > target) {
                    end = mid - 1;

                }

                else {
                    start = mid + 1;
                }
            }

            // right sorted
            else {
                if (target > nums[mid] && target <= nums[end]) {
                    start = mid + 1;
                }

                else {
                    end = mid - 1;
                }
            }
        }
        return false;
        }
    };