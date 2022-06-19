class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int min=prices[0];
        int profit = 0;
        int ans=0;
        for(auto i:prices)
        {
            if(i<min)
                min=i;
            ans=i-min;
            if(ans>profit)
                profit=ans;
        }
        return profit;
    }
};