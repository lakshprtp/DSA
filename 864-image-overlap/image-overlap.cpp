class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
       
        vector<pair<int, int>> a;
        vector<pair<int, int>> b;

        int n = img1.size();

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (img1[i][j] == 1) {
                    a.push_back({i, j});
                }

                if (img2[i][j] == 1) {
                    b.push_back({i, j});
                }
            }
        }

        map<pair<int, int>, int> mp;

        int ans = 0;

        
        for (auto x : a) {
            for (auto y : b) {

                int p = x.first;
                int q = x.second;

                int r = y.first;
                int s = y.second;

                
                pair<int, int> shift = {r - p, s - q};

                mp[shift]++;

                ans = max(ans, mp[shift]);
            }
        }

        return ans;
    
    }
};