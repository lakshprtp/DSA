class Solution {
public:
    double myPow(double x, int n) {
        long long m=n;
        long double base = x;
        long double ans=1;
        if (m<0){
            base=1/base;
            m=-m;


        }

        while(m>0){
            if(m%2==1) ans*=base;

            base*=base;
            m/=2;
        }

        return ans;
    }
};