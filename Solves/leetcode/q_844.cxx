class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ax;
        stack<char> tx;
        for(int i=0;i<s.length();i++)
        {
            char px=s[i];
            if(px!='#')
                ax.push(px);
            else
            {
                if(!ax.empty())
                    ax.pop();
            }
        }
        for(int i=0;i<t.length();i++)
        {
            char px=t[i];
            if(px!='#')
                tx.push(px);
            else
            {
                if(!tx.empty())
                    tx.pop();
            }
        }
        if(ax.size()!=tx.size())
            return false;
        while(!ax.empty())
        {
            if(ax.top()!=tx.top())
                return false;
            ax.pop();
            tx.pop();
        }
        return true;
    }
};