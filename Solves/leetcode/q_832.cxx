class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(vector<int>&tx:image)
        {
            reverse(tx.begin(),tx.end());
            for(int i=0;i<tx.size();i++)
                tx[i]=tx[i]==0?1:0;
        }
        return image;
    }
};