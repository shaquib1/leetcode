class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
         int n = nums.size();
        int i = 0, j = 0;
        while(j<n){
            if(nums[j]==0) j++;
            else{
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};