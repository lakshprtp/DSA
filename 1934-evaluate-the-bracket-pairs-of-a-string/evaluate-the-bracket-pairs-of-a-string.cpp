class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(int i =0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        int first;
       
        string ans;
        bool flag=false;
    
        for(int i =0;i<s.size();i++){
            
            if(s[i]=='('){
                first=i+1;
                flag=true;
                continue;
            }
            else if(s[i]==')'){
                
                string curr=s.substr(first,i-first);
                if(mp.find(curr)!=mp.end()){
                    ans+=mp[curr];
                    flag=false;
                    continue;
                }
                else {
                    ans+='?';
                    flag=false;
                    continue;
                }
                
            }

            else if(!flag){
                ans+=s[i];
            }

            



        }
        return ans;
    }
};