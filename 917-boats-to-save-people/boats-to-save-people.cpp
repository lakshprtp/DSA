class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int n =people.size();
        int count =0,i=0,j=n-1;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                count++;
                j--;
                i++;
            }

            else{
                count++;
                j--;
            }

        }

        

    return count;
       
    
    }
};