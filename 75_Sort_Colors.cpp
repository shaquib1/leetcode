class Solution {
public:
    void sortColors(vector<int>& nums) {
        
          //Bubble sort solution 

          int n = nums.size();
        for(int i=0;i<n-1; i++)
        {
            bool swapped=false;
            for(int j=0; j<n-i-1; j++)
            {
                if(nums[j]> nums[j+1])
                {
                    swap(nums[j+1],nums[j]);
                    swapped=true;
                    
                }


            }

            if(swapped ==false)
               break;
        }
        
    }
};