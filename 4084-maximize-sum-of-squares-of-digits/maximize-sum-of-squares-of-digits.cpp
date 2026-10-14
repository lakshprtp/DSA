class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        // we need num digits, and sum should be sum
        // so start with base cases if sum is less than 9 then just one of that
        // digit to be that and all should be zero else we can start with 9 and
        // keep taking 9 till the num is more than zero, and at last we take
        // remainder and then fill with zero for rest of the digits

        string ans = "";
        if (num * 9 < sum)
            return ans;

        for (int i = 0; i < num; i++) {
            if (sum >= 9) {
                ans += to_string(9);
                sum -= 9;
            } else if (sum > 0) {
                ans += to_string(sum);
                sum = 0;
            } else
                ans += to_string(0);
        }

        return ans;
    }
};