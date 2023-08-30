class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int s=0;
        int n=letters.size();
        int e=n-1;
        int m;
        int ans =-1;
        
        while(s<=e){
            m=s+(e-s)/2;
            if(letters[m]>target){
                ans=m;
                e=m-1;
            }
            else{
                s=m+1;
            }
        }

        if(ans==-1) return letters[0];
        return letters[ans];
    }
};