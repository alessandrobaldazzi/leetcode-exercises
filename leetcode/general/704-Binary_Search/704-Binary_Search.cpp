int search(vector<int> &nums, int target)
{
    if (nums.size() == 1 && nums[0] == target)
    {
        return 0;
    }
    else if (nums.size() <= 1)
    {
        return -1;
    }

    int start = 0, end = nums.size(), pivot = (start + end) / 2, temp = pivot;
    while (start != end)
    {
        if (nums[pivot] == target)
            return pivot;
        else if (nums[pivot] > target)
            end = pivot;
        else
            start = pivot;
        pivot = (start + end) / 2;
        if (pivot == temp)
        {
            return -1;
        }
        temp = pivot;
    }
    return -1;
}