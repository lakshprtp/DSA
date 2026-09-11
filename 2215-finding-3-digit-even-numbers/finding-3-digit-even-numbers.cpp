class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>available(10,0);
        vector<int>ans;
        for(auto d: digits){
            available[d]++;
        }

        for (int num =100;num<999;num+=2){
            vector<int>req(10,0);
            string s=to_string(num);

            for(char c:s){
                req[c-'0']++;
            }

            bool ok =true;

            for(int i =0;i<10;i++){
                if(req[i]>available[i]){
                    ok=false;
                    break;
                }

            }
            if(ok) ans.push_back(num);

        }
        return ans;

    }
};