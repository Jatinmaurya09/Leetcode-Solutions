class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool>ans(candies.size());
    int max_ele=0;
    for(int i=0;i<candies.size();i++){
        if(max_ele<candies[i]){
            max_ele=candies[i];
        }
    }
    for(int i=0;i<candies.size();i++){
        ans[i]=candies[i]+extraCandies>=max_ele;
    }
        return ans;
    }
};