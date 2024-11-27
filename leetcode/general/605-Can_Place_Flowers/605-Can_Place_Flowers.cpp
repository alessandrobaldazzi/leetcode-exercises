class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        if (n == 0)
            return true;
        int dim = flowerbed.size();
        if (dim == 1)
        {
            return flowerbed[0] == 0;
        }
        if (flowerbed[0] == 0 && flowerbed[1] == 0)
        {
            if (n == 1)
            {
                return true;
            }
            flowerbed[0] = 1;
            n--;
        }
        if (flowerbed[dim - 1] == 0 && flowerbed[dim - 2] == 0)
        {
            if (n == 1)
            {
                return true;
            }
            flowerbed[dim - 1] = 1;
            n--;
        }
        for (int i = 1; i < flowerbed.size() - 1; i++)
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
            {
                n--;
                if (n == 0)
                {
                    return true;
                }
                i++;
            }
        }
        return false;
    }
};