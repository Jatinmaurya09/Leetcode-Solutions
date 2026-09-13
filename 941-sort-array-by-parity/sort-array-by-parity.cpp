class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]%2==0){
                i++;
            }
            else if(nums[i]%2!=0 and nums[j]%2!=0){
                j--;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return nums;
    }
};