vector<string> findRepeatedDnaSequences(string s)
{
    if (s.size() <= 10)
    {
        return vector<string>{};
    }
    string curr = s.substr(0, 10);
    unordered_set<string> st, fl;
    st.insert(curr);
    for (int i = 1; i + 10 <= s.size(); i++)
    {
        curr = s.substr(i, 10);
        if (st.contains(curr))
        {
            fl.insert(curr);
        }
        else
        {
            st.insert(curr);
        }
    }
    return vector<string>(fl.begin(), fl.end());
}