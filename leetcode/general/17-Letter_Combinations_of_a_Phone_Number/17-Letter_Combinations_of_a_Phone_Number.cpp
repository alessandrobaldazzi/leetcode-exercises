class Solution
{
public:
    unordered_map<char, string> mp = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};

public:
    void conversion(vector<string> &res, string &digits, string cur, int pos)
    {
        if (pos == digits.length())
        {
            res.push_back(cur);
            return;
        }
        string conv = mp[digits[pos]];
        for (char c : conv)
        {
            conversion(res, digits, cur + c, pos + 1);
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> res;
        if (digits.length() != 0)
        {
            conversion(res, digits, "", 0);
        }
        return res;
    }
};