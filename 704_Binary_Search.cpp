class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = (s + e) / 2;

        while (s <= e)
        {

            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = (s + e) / 2;
        }
        return -1;
    }
};