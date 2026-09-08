class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int prev=0;
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            long long sum=0;
            for(int j=0;j<accounts[i].size();j++){
            sum+=accounts[i][j];
            }
            if(prev<sum){
            ans=sum;
            prev=sum;
        }
        }
        return ans;
    }
};