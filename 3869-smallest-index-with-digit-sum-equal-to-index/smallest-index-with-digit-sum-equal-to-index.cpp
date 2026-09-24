class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int sum=0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            if(sum==i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};