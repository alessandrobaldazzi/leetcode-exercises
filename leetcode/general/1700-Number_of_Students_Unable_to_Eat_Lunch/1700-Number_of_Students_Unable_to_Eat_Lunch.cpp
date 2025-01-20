int countStudents(vector<int> &students, vector<int> &sandwiches)
{
    int hashTable[] = {0, 0};
    for (int i = 0; i < students.size(); i++)
    {
        hashTable[students[i]]++;
    }
    for (int i = 0; i < sandwiches.size(); i++)
    {
        if (hashTable[sandwiches[i]] == 0)
        {
            return hashTable[!sandwiches[i]];
        }
        else
        {
            hashTable[sandwiches[i]]--;
        }
    }
    return 0;
}