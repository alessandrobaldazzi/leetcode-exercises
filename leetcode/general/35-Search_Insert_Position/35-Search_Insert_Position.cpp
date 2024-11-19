class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int i = -1, j = nums.size(), curr;
        while (j - i > 1)
        {
            curr = nums[(i + j) / 2];
            if (curr == target)
                return (i + j) / 2;
            if (curr > target)
            {
                j = (i + j) / 2;
            }
            else
            {
                i = (i + j) / 2;
            }
        }
        return j;
    }
};