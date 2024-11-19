class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int curr = 0, toCopy;
        if (nums.size() == 1)
            return 1;
        for (toCopy = 1; toCopy < nums.size(); toCopy++)
        {
            if (nums[curr] != nums[toCopy])
            {
                curr++;
                nums[curr] = nums[toCopy];
            }
        }
        return curr + 1;
    }
};