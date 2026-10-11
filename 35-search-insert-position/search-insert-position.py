class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        n=len(nums)
        start=0
        end=n-1
        while start<=end:
            mid=start+(end-start)//2
            if nums[mid]==target:
                return mid
            if nums[mid]>target:
                end=mid-1    
            else:start=mid+1

        
        
        #REMEMBER -> INSERTION POSITION IS START AFTER LOOP FINISHES
        return start 