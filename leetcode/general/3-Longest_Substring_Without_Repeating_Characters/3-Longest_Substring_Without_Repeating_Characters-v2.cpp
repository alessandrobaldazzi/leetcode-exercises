class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int firstIndex = 0, maxLength = 0;
        unordered_map<char, int> chars;
        for (int i = 0; i < s.size(); i++)
        {
            if (chars.contains(s[i]) && chars[s[i]] >= firstIndex)
            {
                firstIndex = chars[s[i]] + 1;
            }
            maxLength = max(maxLength, i-firstIndex+1);
            chars[s[i]] = i;
        }
        return maxLength;
    }
};