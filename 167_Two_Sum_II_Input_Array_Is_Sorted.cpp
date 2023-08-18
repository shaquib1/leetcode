class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        int n = numbers.size();
        int s = 0;
        int e = n - 1;
        vector<int> ans;

        while (s < e)
        {
            if (numbers[s] + numbers[e] == target)
            {
                ans.push_back(s + 1);
                ans.push_back(e + 1);
            }

            if (numbers[s] + numbers[e] > target)
            {
                e--;
            }
            else
            {
                s++;
            }
        }

        return ans;
    }
};