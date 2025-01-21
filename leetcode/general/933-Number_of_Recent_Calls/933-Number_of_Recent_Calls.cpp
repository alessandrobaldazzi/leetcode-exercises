class RecentCounter
{
public:
    queue<int> counter;

    RecentCounter()
    {
    }

    int ping(int t)
    {
        counter.push(t);
        while (!counter.empty() && counter.front() < (t - 3000))
        {
            counter.pop();
        }
        return counter.size();
    }
};