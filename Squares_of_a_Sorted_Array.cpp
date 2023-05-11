class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {


  vector <int> square;

    for(int i=0; i<nums.size();i++){
        int temp = nums[i]*nums[i];
        square.push_back(temp);
    }

        sort(square.begin(),square.end());
        
        return square;
    }
};           