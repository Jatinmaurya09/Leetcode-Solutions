class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int k=k%n;
        reverse(nums.begin()+k, nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin(),nums.end());
        int min_ele =INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min_ele){
                min_ele=nums[i];
            }
        }
        return min_ele;
    }
};