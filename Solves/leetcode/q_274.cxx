class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        for(int i=0;i<citations.size();i++)
        {
            int px=citations.size()-i;
            if(px<=citations[i])
                return px;
        }
        return 0;
    }
};