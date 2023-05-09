class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
     int sum = 0;
    for (int i = 0; i < nums.size(); i++)
        sum += nums[i];
    int left_sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        left_sum += nums[i];
        if (left_sum == sum)
            return i;
        sum -= nums[i];
    }
    return -1;
       


    }
};