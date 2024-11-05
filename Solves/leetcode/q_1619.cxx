class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        double sum=0.0;
        int tx=(int)((arr.size()*5)/100.0);
        for(int i=tx;i<arr.size()-tx;i++)
            sum+=arr[i];
        return sum/(arr.size()-tx*2);
    }
};