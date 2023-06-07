class Solution
{
public:
    bool check(vector<int> &nums)
    {

        // Ans :- in this we find at least one time n-1 is greater than n other than this is false ki arrary is not sorted or rotated

        int count = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++)
        {

            if (nums[i - 1] > nums[i])
            {
                count++;
            }
        }

        if (nums[n - 1] > nums[0])
        {
            count++;
        }

        return count <= 1;
    }
};