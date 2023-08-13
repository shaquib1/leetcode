class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {

        int n = nums.size();
        bool isIncreasing = false, isDecreasing = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] < nums[i + 1])
                isIncreasing = true;
            else if (nums[i] > nums[i + 1])
                isDecreasing = true;
            if (isIncreasing & isDecreasing)
                return false;
        }
        return true;
    }
};