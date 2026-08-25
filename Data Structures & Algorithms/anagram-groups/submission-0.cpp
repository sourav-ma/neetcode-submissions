class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>groups;
        for(int i=0;i<strs.size();i++){
             map<char,int>mp;
        for(int j=0;j<strs[i].size();j++){
            mp[strs[i][j]]++;
        }
        string key="";
        for(auto it:mp){
            key+=it.first;
            key+=to_string(it.second);
        }
        groups[key].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:groups){
            ans.push_back(it.second);
        }
        return ans;
    }
};
