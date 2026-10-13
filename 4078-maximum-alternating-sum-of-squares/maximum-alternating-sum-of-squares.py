class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        arr=[]
        n=len(nums)

        for x in nums:
            arr.append(abs(x))
        arr.sort()
        s1=0
        s2=n//2
        sum=0
        i=0
        while i<n :
            if i%2==0:
                sum+=arr[s2]*arr[s2]
                s2+=1
                
            else:
                sum-=arr[s1]*arr[s1]
                s1+=1
            i+=1    
        return sum



