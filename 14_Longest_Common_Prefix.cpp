class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        sort(strs.begin(), strs.end());
        string ans = "";
        int n = strs.size();
        string s = strs[0];
        string e = strs[n - 1];

        for (int i = 0; i < min(s.size(), e.size()); i++)
        {
            if (s[i] == e[i])
            {
                ans += s[i];
            }
            else
                break;
        }
        return ans;
    }
};