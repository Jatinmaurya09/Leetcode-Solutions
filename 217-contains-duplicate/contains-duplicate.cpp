class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool dup=false;
        int left=0;
        int right=left+1;
        sort(nums.begin(),nums.end());
        while(left<nums.size() and right<nums.size()){
            if(nums[left]==nums[right]){
                return true;
            }
            else{
                left++;
                right++;
            }
        }
        return dup;
    }
};