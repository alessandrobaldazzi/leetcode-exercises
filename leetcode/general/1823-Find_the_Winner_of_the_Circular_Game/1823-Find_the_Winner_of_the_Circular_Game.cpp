int findTheWinner(int n, int k)
{
    queue<int> circle;
    int temp;
    for (int i = 1; i <= n; i++)
    {
        circle.push(i);
    }

    while (circle.size() != 1)
    {
        for (int i = 1; i < k; i++)
        {
            temp = circle.front();
            circle.pop();
            circle.push(temp);
        }
        circle.pop();
    }

    return circle.back();
}
