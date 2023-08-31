class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
          string result="";
        for(int i=0;i<words.size();i++){
            string acro=words[i];
            result+=acro[0];
        }
        return result==s;
    }
};