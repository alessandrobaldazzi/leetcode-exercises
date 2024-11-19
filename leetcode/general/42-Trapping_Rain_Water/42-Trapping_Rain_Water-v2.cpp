class Solution
{
public:
    int trap(vector<int> &height)
    {
        int res = 0, leftInd = 0, rightInd = height.size() - 1, maxLeft = 0, maxRight = 0;
        while (leftInd <= rightInd)
        {
            if (height[leftInd] <= height[rightInd])
            {
                if (height[leftInd] >= maxLeft)
                {
                    maxLeft = height[leftInd];
                }
                else
                {
                    res += maxLeft - height[leftInd];
                }
                leftInd++;
            }
            else
            {
                if (height[rightInd] >= maxRight)
                {
                    maxRight = height[rightInd];
                }
                else
                {
                    res += maxRight - height[rightInd];
                }
                rightInd--;
            }
        }
        return res;
    }
};