class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool dup=false;
        unordered_set<int> ans;
        for(int i=0;i<nums.size();i++){
            if(ans.find(nums[i])!=ans.end()){
                return true;
            }
            else{
                ans.insert(nums[i]);
            }
        }
        return dup;
    }
};