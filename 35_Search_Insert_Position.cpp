class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int s = 0;
        int l = n - 1;
        int m;
        while (s <= l)
        {
            m = (s + l) / 2;
            if (nums[m] == target)
            {
                return m;
            }
            else if (nums[m] > target)
            {
                l = m - 1;
            }
            else if (nums[m] < target)
            {
                s = m + 1;
            }
        }
        return s;
    }
};