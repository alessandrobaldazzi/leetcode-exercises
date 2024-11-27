class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        auto cmp = [](pair<int, int> left, pair<int, int> right)
        {
            return left.second < right.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pr(cmp);
        vector<int> res(k);
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto el : mp)
        {
            pr.push(el);
        }
        for (int i = 0; i < k; i++)
        {
            res[i] = pr.top().first;
            pr.pop();
        }
        return res;
    }
};