class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0, j=n-1;
        while(i<=j)
        {
           
            if(nums[i]>=nums[j])
            {
                
                if(target==nums[i])
                return i;
                else if(target==nums[j])
                return j;
                
                else
                i++;
                j--;
            }
            else
            {
               
                int mid = i + (j - i) / 2;
                if(nums[mid]<target)
                    i=mid+1;
                else if(nums[mid]>target)
                    j=mid-1;
                else
                return mid;
            }
        }
       
        return -1;
    }
};