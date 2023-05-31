// in this we know how to merge two shorted array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        

         int f=0;
       for(int i = m;i<m+n;i++){
            nums1[i]=nums2[f];
            f++;
        }
        sort(nums1.begin(),nums1.end());
        
    }
}; 