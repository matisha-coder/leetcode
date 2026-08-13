class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        int s =original.size();
        int k=0;
        if(m*n != s)
        return{};
        vector<vector<int>>ans;
        for(int i=0;i<m;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                v.push_back(original[k]);
                k++;
            }
            ans.push_back(v);
        }
        return ans;
    }
};