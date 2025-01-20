int calculate(string s)
{
    deque<int> nums;
    char sign = '+';
    int num;
    for (int i = 0; i < s.size(); i++)
    {
        num = 0;
        if (s[i] == ' ')
            continue;
        while (i < s.size() && isdigit(s[i]))
        {
            num = num * 10 + (s[i] - '0');
            i++;
        }

        if (sign == '+')
            nums.push_back(num);
        else if (sign == '-')
            nums.push_back(-num);
        else if (sign == '*')
            nums.back() *= num;
        else if (sign == '/')
            nums.back() /= num;

        if (i < s.size())
        {
            sign = s[i];
        }
    }
    return accumulate(nums.begin(), nums.end(), 0);
}