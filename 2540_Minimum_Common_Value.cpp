class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
         int s1=0, s2=0;
         while(s1<nums1.size() && s2<nums2.size()){
             if(nums1[s1]==nums2[s2]){
                 return nums1[s1];
             }else if(nums1[s1]<nums2[s2]){
                 s1++;
             }else{
                 s2++;
             }
         }
         return -1;
    }
};