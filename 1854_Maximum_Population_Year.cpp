class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
         vector<int>v(101,0);
        for(int i=0;i<logs.size();i++)
        {
            for(int j=logs[i][0];j<logs[i][1];j++)
            {
                v[j-1950]++;
            }
        }
        int ans=0;
        int max=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>max)
            {
                max=v[i];
                ans=i+1950;
            }
        }
        return ans;
    }
};