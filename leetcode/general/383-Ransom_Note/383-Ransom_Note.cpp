class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> letters;
        for (int i = 0; i < magazine.size(); i++)
        {
            letters[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); i++)
        {
            if (letters.contains(ransomNote[i]) && letters[ransomNote[i]] > 0)
            {
                letters[ransomNote[i]]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};