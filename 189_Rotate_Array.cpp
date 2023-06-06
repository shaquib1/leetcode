


class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {


   // in this we used modulus operation to find next index of last elemetn so this is possible by modulus operation 

        vector<int> temp(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            temp[(i + k) % nums.size()] = nums[i];
        }

        // copy temp into nums vector
        nums = temp;
    }
};