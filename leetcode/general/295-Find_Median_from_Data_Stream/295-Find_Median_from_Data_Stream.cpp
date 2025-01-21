class MedianFinder
{
public:
    priority_queue<int> minHeap;
    priority_queue<int, vector<int>, greater<int>> maxHeap; // Heap with reverse order, top gives minimum value

    MedianFinder()
    {
    }

    void addNum(int num)
    {
        if (maxHeap.size() == 0 || num >= maxHeap.top())
        {
            maxHeap.push(num);
        }
        else
        {
            minHeap.push(num);
        }

        if (maxHeap.size() > minHeap.size() + 1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if (minHeap.size() > maxHeap.size())
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian()
    {
        if (minHeap.size() < maxHeap.size())
        {
            return (double)maxHeap.top();
        }
        else
        {
            return ((double)minHeap.top() + (double)maxHeap.top()) / 2;
        }
    }
};