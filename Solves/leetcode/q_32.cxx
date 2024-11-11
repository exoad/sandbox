
class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.length()<=1)
            return 0;
        int mx=0;
        stack<int> st;
        st.push(-1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                st.push(i);
            else
            {
                if(!st.empty())
                    st.pop();
                if(!st.empty())
                    mx=max(mx,i-st.top());
                else
                    st.push(i);
            }
        }
        return mx;
    }
};
