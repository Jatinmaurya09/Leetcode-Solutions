class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-minprice;
            if(profit>ans){
                ans=profit;
            }
            if(prices[i]<minprice){
                minprice=prices[i];
            }
        }
        return ans;
    }
};