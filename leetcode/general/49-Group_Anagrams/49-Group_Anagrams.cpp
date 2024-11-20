class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++)
        {
            string sortedWord = strs[i];
            sort(sortedWord.begin(), sortedWord.end());
            mp[sortedWord].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for (auto val : mp)
        {
            res.push_back(val.second);
        }
        return res;
    }
};