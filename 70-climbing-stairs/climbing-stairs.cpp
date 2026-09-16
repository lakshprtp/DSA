class Solution {
public:
    int climbStairs(int n) {
        int prev2=1;
        int prev=2;
        if (n==2||n==1) return n;
        int no=0;
        for(int i =3;i<=n;i++){
            no=prev+prev2;
            prev2=prev;
            prev=no;
        }
        return no;
    }
};