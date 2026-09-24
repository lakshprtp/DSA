class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int j=0;
        int count =0;
        for(int i =0;i<trainers.size();i++){
            if(j<players.size()&&trainers[i]>=players[j]){  // players=[] trainers=[1,2,3,4,5]
                count++;
                j++;
            }
        }
        return count;
    }
};