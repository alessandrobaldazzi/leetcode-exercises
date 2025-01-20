int calculate(string s)
{
    int res = 0;
    stack<int> stackCalc;
    stack<char> preOp;
    string current = "";
    // Operazione base -> a + b // a - b
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            current += s[i];
        }
        else if (s[i] == '+' || s[i] == '-')
        {
            if (current.size() != 0)
                res += stoi(current);
            current = "";
            if (s[i] == '-')
            {
                current = "-";
            }
        }
        else if (s[i] == '(')
        {
            stackCalc.push(res);
            if (current[0] == '-')
            {
                preOp.push('-');
            }
            else
            {
                preOp.push('+');
            }
            res = 0;
            current = "";
        }
        else if (s[i] == ')')
        {
            if (current.size() != 0)
            {
                res += stoi(current);
            }
            current = "";
            if (preOp.top() == '+')
            {
                res += stackCalc.top();
            }
            else
            {
                res = stackCalc.top() - res;
            }
            preOp.pop();
            stackCalc.pop();
        }
    }
    if (current.size() != 0)
    {
        res += stoi(current);
    }
    return res;
}