class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = "";
        if (strs.size() == 0)
            return res;
        if (strs.size() == 1)
            return strs[0];
        sort(strs.begin(), strs.end());

        for (int i = 0; i < strs[0].size(); i++)
        {
            if (strs[0][i] != strs[strs.size() - 1][i])
            {
                return res;
            }
            res += strs[0][i];
        }
        return res;
    }
};