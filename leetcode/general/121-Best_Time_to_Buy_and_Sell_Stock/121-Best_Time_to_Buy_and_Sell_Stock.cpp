class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minVal = prices[0], maxVal = prices[0], res = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (minVal > prices[i])
            {
                minVal = prices[i];
                maxVal = prices[i];
            }
            else if (maxVal < prices[i])
            {
                maxVal = prices[i];
                res = max(res, maxVal - minVal);
            }
        }
        return res;
    }
};