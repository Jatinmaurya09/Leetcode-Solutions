class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result(nums.size());
        int left=0;
        int mid=n;
        int k=0;
        while(left<nums.size()/2){
            result[k]=nums[left];
            left++;
            k++;
            result[k]=nums[mid];
            mid++;
            k++;
        }
        return result;
    }
};