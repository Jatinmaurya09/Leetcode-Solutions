class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>result(nums.size());
    for(int i=0;i<nums.size();i++){
       result[i]= pow(nums[i],2);
    }

    sort(result.begin(),result.end());

    for(int i=0;i<nums.size();i++){
        nums[i]=result[i];
    }
    return nums;
}
};