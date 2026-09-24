class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hash(nums.size());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]>nums.size()/2){
                ans=nums[i];
            }
        }
        return ans;
    }
};