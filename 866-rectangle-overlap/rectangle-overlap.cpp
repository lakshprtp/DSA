class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
          int p = rec1[0];
        int q = rec1[1];
        int r = rec1[2];
        int s = rec1[3];


        int t = rec2[0];
        int u = rec2[1];
        int v = rec2[2];
        int w = rec2[3];


        return (v>p && w>q && r>t && s>u);
    }
};