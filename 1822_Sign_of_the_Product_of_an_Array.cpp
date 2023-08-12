class Solution {
public:
    int arraySign(vector<int>& nums) {
        
       double p =1;
        for(int i=0; i<nums.size(); i++){
            p*=nums[i];
        }
        
        return signFunc(p);
    }
    
    
      int signFunc(double p){
          if(p<0){
              return -1;
          }else if(p>0){
              return 1;
          }else{
              return 0;
          }
      }
};