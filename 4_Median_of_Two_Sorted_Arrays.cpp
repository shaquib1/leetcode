class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        for (int i = 0; i < nums2.size(); i++)
        {
            nums1.push_back(nums2[i]);
        }

        int size = nums1.size();
        sort(nums1.begin(), nums1.end());
        int mid = (size - 1) / 2;

        if (size % 2 == 0)
        {
            return double(nums1[mid] + nums1[mid + 1]) / 2;
        }
        else
        {
            return double(nums1[mid]);
        }
    }
};