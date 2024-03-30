class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int maxProfit=0;
        int miniPrice=prices[0];

        for(int i=1;i<prices.size();i++)
        {
            miniPrice=min(miniPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-miniPrice);
        }
        return maxProfit;  
    }
};