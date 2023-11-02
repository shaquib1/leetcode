class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
      int ans=0; 
      int s=nums.size();

       for(int i=0; i<s; i++){

           for(int j=i+1; j<s; j++){
                  
                   if(nums[i]==nums[j]){
                       ans+=1;
                   }
           }
       }
       return ans;

    }
};