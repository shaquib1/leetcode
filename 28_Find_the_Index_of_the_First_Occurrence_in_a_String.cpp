class Solution {
public:
    int strStr(string haystack, string needle) {
         int it = haystack.find(needle);
        if(it == haystack.npos)   return -1;
        else return it;
    }
};