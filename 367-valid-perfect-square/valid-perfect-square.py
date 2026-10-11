class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num==1 :
            return True
        

       
        start=0
        end=num/2  
        while start<=end:
            mid =start+(end-start)//2
            sqr=mid*mid
            if sqr==num:
                return True
            if  sqr>num:
                end=mid-1     
            else :
                start=mid+1    
        return False        