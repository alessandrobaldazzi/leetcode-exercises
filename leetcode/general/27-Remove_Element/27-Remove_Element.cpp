class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int toChange = 0, dim = nums.size();
        for (int current = 0; current < dim; current++)
        {
            if (nums[current] != val)
            {
                nums[toChange] = nums[current];
                toChange++;
            }
        }
        return toChange;
    }
};