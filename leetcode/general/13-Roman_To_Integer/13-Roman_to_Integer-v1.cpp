class Solution
{
public:
    int romanToInt(string s)
    {
        int res = 0;
        unordered_map<string, int> mp{
            {"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90}, {"CD", 400}, {"CM", 900}, {"I", 1}, {"V", 5}, {"X", 10}, {"L", 50}, {"C", 100}, {"D", 500}, {"M", 1000}};
        res += mp[s.substr(0, 1)];
        for (int i = 1; i < s.size(); i++)
        {
            if (mp.contains(s.substr(i - 1, 2)))
            {
                res -= mp[s.substr(i - 1, 1)];
                res += mp[s.substr(i - 1, 2)];
            }
            else
            {
                res += mp[s.substr(i, 1)];
            }
        }
        return res;
    }
};