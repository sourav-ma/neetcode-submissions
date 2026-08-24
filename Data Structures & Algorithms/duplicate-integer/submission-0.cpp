class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int ,int>maps;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maps[nums[i]]++;
        }
        for(auto it:maps){
            int value=it.second;
            if(it.second>1){
                return true;
            }
        }
        return false;
        
        
    }
};