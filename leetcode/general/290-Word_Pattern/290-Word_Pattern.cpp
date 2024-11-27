class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, int> p2i;
        unordered_map<string, int> s2i;
        string curr = "";
        int j = 0;
        for (int i = 0; i <= s.size(); i++)
        {
            if (s[i] != ' ' && i != s.size())
            {
                curr += s[i];
            }
            else
            {
                if (!p2i.contains(pattern[j]) && !s2i.contains(curr))
                {
                    p2i[pattern[j]] = j;
                    s2i[curr] = j;
                }
                else if (p2i.contains(pattern[j]) && s2i.contains(curr) && p2i[pattern[j]] == s2i[curr])
                {
                }
                else
                {
                    return false;
                }
                curr = "";
                j++;
            }
        }
        return j == pattern.size();
    }
};