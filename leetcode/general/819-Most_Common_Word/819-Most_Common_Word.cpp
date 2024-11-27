class Solution
{
public:
    string mostCommonWord(string paragraph, vector<string> &banned)
    {
        unordered_map<string, int> mp;
        regex r("[,.!?;'\\s]+");
        string curr = "";
        int count = 0;
        for (int i = 0; i < paragraph.size(); i++)
        {
            if (regex_match(paragraph.substr(i, 1), r))
            {
                if (curr.size() != 0)
                {
                    mp[curr]++;
                    curr = "";
                }
            }
            else
            {
                curr += (char)tolower((char)paragraph[i]);
            }
        }
        if (curr.size() != 0)
        {
            mp[curr]++;
            curr = "";
        }
        for (auto s : banned)
        {
            mp[s] = 0;
        }
        for (const auto &it : mp)
        {
            if (count < it.second)
            {
                count = it.second;
                curr = it.first;
            }
        }
        return curr;
    }
};