class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        int fast=slow+1;
        while(slow<nums.size() and fast<nums.size()){
            if(nums[slow]==nums[fast]){
                fast++;
            }
            else{
                slow++;
                nums[slow]=nums[fast];
                fast++;
            }
        }
        return slow+1;
    }
};