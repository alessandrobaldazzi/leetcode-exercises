class Solution
{
public:
    int trap(vector<int> &height)
    {
        int res = 0, dim = height.size(), cur;
        vector<int> backMax(dim), frontMax(dim);
        for (int i = 1; i < height.size(); i++)
        {
            backMax[i] = max(backMax[i - 1], height[i - 1]);
            frontMax[dim - i - 1] = max(frontMax[dim - i], height[dim - i]);
        }
        for (int i = 0; i < height.size(); i++)
        {
            cur = min(backMax[i], frontMax[i]) - height[i];
            if (cur > 0)
            {
                res += cur;
            }
        }
        return res;
    }
};