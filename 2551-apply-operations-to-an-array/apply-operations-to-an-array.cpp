class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int slow=0;
        int fast=slow+1;
        while(slow<nums.size() and fast<nums.size()){
            if(nums[slow]!=nums[fast]){
                slow++;
                fast++;
            }
            else{
                nums[slow]*=2;
                slow++;
                nums[fast]=0;
                fast++;
            }
        }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};