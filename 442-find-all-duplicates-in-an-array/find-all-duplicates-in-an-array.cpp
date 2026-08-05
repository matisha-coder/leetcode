class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_set<int>st;
        vector<int>ans;
        for(int num : nums)
        {
            if(st.count(num))
            ans.push_back(num);
            else
            st.insert(num);
        }
        return ans;
    }
};