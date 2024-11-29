class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> st1, inter;
        st1.insert(nums1.begin(), nums1.end());
        for (int i = 0; i < nums2.size(); i++)
        {
            if (st1.contains(nums2[i]))
                inter.insert(nums2[i]);
        }
        vector<int> res(inter.begin(), inter.end());
        return res;
    }
};