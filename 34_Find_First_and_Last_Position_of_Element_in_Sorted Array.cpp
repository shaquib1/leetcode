class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        int s = -1;
        int e = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                s = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] == target)
            {
                e = i;
                break;
            }
        }

        return {s, e};
    }
};