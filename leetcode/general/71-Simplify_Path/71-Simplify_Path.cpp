class Solution
{
public:
    string simplifyPath(string path)
    {
        stack<string> builder;
        string curr = "";
        for (int i = 0; i <= path.size(); i++)
        {
            if (i == path.size() || path[i] == '/')
            {
                if (curr == ".." && builder.size() > 0)
                {
                    builder.pop();
                }
                else if (curr != "" && curr != "." && curr != "..")
                {
                    builder.push(curr);
                }
                curr = "";
            }
            else
            {
                curr += path[i];
            }
        }

        string res = "";
        while (builder.size() != 0)
        {
            res = "/" + builder.top() + res;
            builder.pop();
        }
        if (res.size() == 0)
            return "/";
        return res;
    }
};