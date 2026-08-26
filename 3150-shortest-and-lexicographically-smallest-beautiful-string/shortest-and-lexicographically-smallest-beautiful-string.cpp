class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        // first on github
        int i = 0;
        int j = 0;
        int n = s.size();
        int count = 0;
        string ans = "";

        while (j < n) {
            if (s[j] == '1')
                count++;
            
            if (count > k) {
                while (s[i] == '0')
                    i++;
                i++;
                count--;
            }

            if (count == k) {
                while (s[i] == '0')
                    i++;
                string curr = s.substr(i, j - i + 1);
                if (ans.empty())
                    ans = curr;
                else if (curr.size() < ans.size())
                    ans = curr;
                else if (curr.size() == ans.size() && curr < ans)
                    ans = curr;
            }

            
            j++;
        }
        return ans;
    }
};