class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        

  int z = 0;
        int k;
        for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
            i--;
            z++;
        }
    }
    k = nums.size() ;
    return k;
    }
};