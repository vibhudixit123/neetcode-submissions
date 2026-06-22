class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>fin;
        vector<vector<string>>ans;

        for(int i=0;i<strs.size();i++){
            
            string s_i = strs[i];
            sort(s_i.begin(),s_i.end());
                
            fin[s_i].push_back(strs[i]);
            }
        
        for(auto& pair:fin){
            ans.push_back(pair.second);

        }
        return ans;
        
    }
};
