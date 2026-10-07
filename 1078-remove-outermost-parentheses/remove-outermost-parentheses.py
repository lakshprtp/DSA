class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        primitive_str=""
       
        count=1
        first=0
        n=len(s)
        for i in range(1,n):
            if s[i]=='(':
                count+=1
            else :  count-=1
               

            if count ==0:
                primitive_str+=s[first+1:i]
                if i+1:
                    first=i+1

        return primitive_str           
            



