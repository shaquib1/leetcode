class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> ans, count(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            count[nums[i - 1]]++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (count[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};