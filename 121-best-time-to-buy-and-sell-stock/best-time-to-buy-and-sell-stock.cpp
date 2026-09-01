class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n =prices.size();
        int MinPrice = prices[0];
        int MaxProfit =0;
        for(int i=0;i<n;i++)
        {
            MinPrice = min(MinPrice, prices[i]);
            MaxProfit = max(MaxProfit, prices[i]-MinPrice);
        }
        return MaxProfit;
    }
};