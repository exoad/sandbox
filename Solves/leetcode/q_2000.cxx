class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch)==string::npos)
            return word;
        string b="";
        int i=0;
        for(;i<word.length()-1;i++)
        {
            if(word[i]==ch)
                break;
            b+=word[i];
        }
        b+=word[i];
        reverse(b.begin(),b.end());
        return b.append(word.substr(i+1));
    }
};