int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> heap;
    for (int i = 0; i < nums.size(); i++)
    {
        heap.push(nums[i]);
    }
    while (k != 1)
    {
        heap.pop();
        k--;
    }
    return heap.top();
}