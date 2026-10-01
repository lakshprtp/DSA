class Solution {
public:
    int divide(int dividend, int divisor) {
        long long dv=dividend;
        long long ds=divisor;
        long long quotient=0;
        int sign=1;
        if (dv<=INT_MIN && ds==-1) return INT_MAX;
        if(dv>=INT_MAX && ds==-1) return INT_MIN+1;
        

        if ((dv<0&&ds<0)||(dv>0&&ds>0)){
            sign=1;
        }
        else{
            sign=-1;
        }

        dv=abs(dv);
        ds=abs(ds);

        while(dv>=ds){
            dv-=ds;
            quotient++;
        }

       if(sign==1) return quotient;
       return -quotient;
    }
};