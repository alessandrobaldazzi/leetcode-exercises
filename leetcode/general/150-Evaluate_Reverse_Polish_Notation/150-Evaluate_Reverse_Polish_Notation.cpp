class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> nums;
        int x, y;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+")
            {
                x = nums.top();
                nums.pop();
                y = nums.top();
                nums.pop();
                nums.push(y + x);
            }
            else if (tokens[i] == "-")
            {
                x = nums.top();
                nums.pop();
                y = nums.top();
                nums.pop();
                nums.push(y - x);
            }
            else if (tokens[i] == "*")
            {
                x = nums.top();
                nums.pop();
                y = nums.top();
                nums.pop();
                nums.push(y * x);
            }
            else if (tokens[i] == "/")
            {
                x = nums.top();
                nums.pop();
                y = nums.top();
                nums.pop();
                nums.push(y / x);
            }
            else
            {
                nums.push(stoi(tokens[i]));
            }
        }
        return nums.top();
    }
};