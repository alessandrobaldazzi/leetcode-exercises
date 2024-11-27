class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int count[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            count[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            count[t[i] - 'a']--;
            if (count[t[i] - 'a'] == -1)
            {
                return t[i];
            }
        }
        return '\n';
    }
};