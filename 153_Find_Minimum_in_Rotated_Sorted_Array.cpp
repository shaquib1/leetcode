class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int s = 0;
        int n = nums.size();
        int e = n - 1;
        int mini = INT_MAX;

        while (s <= e)
        {
            int m = s + (e - s) / 2;
            if (nums[m] >= nums[s])
            {
                mini = min(mini, nums[s]);
                s = m + 1;
            }
            else
            {
                if (nums[e] >= nums[m])
                {
                    mini = min(nums[m], mini);
                    e = m - 1;
                }
            }
        }
        return mini;
    }
};