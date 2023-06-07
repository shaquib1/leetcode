

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> v1, v2;
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size(), m = nums2.size();

        int i = 0, j = 0;
        int common = INT_MIN;
        while (i < n and j < m)
        {
            if (nums1[i] == nums2[j] and common != nums1[i])
            {
                ans.push_back(nums1[i]);
                common = nums1[i];
                i++, j++;
            }
            else if (nums1[i] < nums2[j])
                i++;
            else
                j++;
        }
        return ans;
    }
};