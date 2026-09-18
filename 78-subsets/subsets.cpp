class Solution {
public:
    void subset_sol(int ind,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i>ind and nums[i]==nums[i-1]){
                continue;
            }
            ds.push_back(nums[i]);
            subset_sol(i+1,nums,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        subset_sol(0,nums,ans,ds);
        return ans;
    }
};