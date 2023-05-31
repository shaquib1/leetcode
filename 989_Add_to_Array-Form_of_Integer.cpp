
//this is temporary code when i read the problem and solve it then i solve it by self


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
         vector<int>ans;
        vector<int>v;
        while(k>0){
            v.push_back(k%10);
            k/=10;
        }
        reverse(begin(v),end(v));
        int n=num.size();
        int carry=0;
        int i=n-1,j=v.size()-1;
        while(i>=0 or j>=0){
            int sum=carry;
          if(i>=0)sum+=num[i--];
          if(j>=0)sum+=v[j--];
          carry=sum/10;
          ans.push_back(sum%10);
        }
        if(carry)
        ans.push_back(carry);
         reverse(begin(ans),end(ans));
        return ans;
    }
};