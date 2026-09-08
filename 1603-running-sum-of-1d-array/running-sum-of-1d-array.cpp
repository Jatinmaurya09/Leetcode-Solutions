class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};