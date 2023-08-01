class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto ch:s)
        {
            if(ch=='(' || ch=='{' || ch=='[')
            st.push(ch);
            else{
                if(st.empty())return false;
                if(ch==')' && st.top()=='(')
                st.pop();
                else if(ch=='}'&& st.top()=='{')
                st.pop();
                else if(ch==']' && st.top()=='[')
                st.pop();
                else
                return false;
            }
        }
        if(st.empty())return true;
        return false;
    }
};
