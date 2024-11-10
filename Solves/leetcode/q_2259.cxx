class Solution {
public:
    string removeDigit(string number, char digit) {
        int l=-1;
        for(int i=0;i<number.length();i++)
        {
            if(number[i]==digit)
            {
                l=i;
                if(i<number.length()-1&&number[i+1]>digit)
                    return number.substr(0,i)+number.substr(i+1);
            }
        }
        return number.substr(0,l)+number.substr(l+1);
    }
};
