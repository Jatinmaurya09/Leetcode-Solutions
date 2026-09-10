class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int >result(nums.size());
    int index=result.size()-1;
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        if(abs(nums[left])<abs(nums[right])){
           result[index]= nums[right]*nums[right];
           right--;
        }
        else{
            result[index]=nums[left]*nums[left];
            left++;
        }
        index--;
    }
    return result;
}
};