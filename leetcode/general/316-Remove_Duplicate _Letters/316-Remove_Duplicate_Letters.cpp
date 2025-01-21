string removeDuplicateLetters(string s)
{
    unordered_set<char> seen;
    unordered_map<char, int> lastTime;
    string res = "";

    for (int i = 0; i < s.size(); i++)
    {
        lastTime[s[i]] = i;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (!seen.contains(s[i]))
        {
            while (res.size() != 0 && res.back() > s[i] && lastTime[res.back()] > i)
            {
                seen.erase(res.back());
                res.pop_back();
            }
            res.push_back(s[i]);
            seen.insert(s[i]);
        }
    }
    return res;
}