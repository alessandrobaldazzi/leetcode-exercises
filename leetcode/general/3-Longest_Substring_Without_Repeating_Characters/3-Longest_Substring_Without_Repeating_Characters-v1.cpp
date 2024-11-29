class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        string longestSub = "", currentSub = "";
        int firstIndex = 0;
        unordered_map<char, int> chars;
        for (int i = 0; i < s.size(); i++)
        {
            if (chars.contains(s[i]) && chars[s[i]] >= firstIndex)
            {
                if (currentSub.size() > longestSub.size())
                {
                    longestSub = currentSub;
                }
                currentSub = s.substr(chars[s[i]] + 1, i - chars[s[i]]);
                firstIndex = chars[s[i]] + 1;
            }
            else
            {
                currentSub += s[i];
            }
            chars[s[i]] = i;
        }
        if (currentSub.size() > longestSub.size())
        {
            longestSub = currentSub;
        }
        return longestSub.size();
    }
};