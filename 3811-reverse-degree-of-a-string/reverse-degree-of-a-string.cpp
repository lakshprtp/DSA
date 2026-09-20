class Solution {
public:
    int reverseDegree(string s) {
        long long sum =0;
        int idx=0;
        for (char x:s){
            int ridx=26-(x-'a');
            idx++;
            sum+=idx*ridx;

        }
        return sum;
    }
};