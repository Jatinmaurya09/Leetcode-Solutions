class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int ele:nums){
            ans=ans^ele;
        }
        return ans;
    }
};