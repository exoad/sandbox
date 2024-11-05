class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int px=arr[arr.size()-1];
        arr[arr.size()-1]=-1;
        for(int i=arr.size()-2;i>=0;i--)
        {
            int tx=arr[i];
            arr[i]=px;
            px<tx?px=tx:int();
        }
        return arr;
    }
};