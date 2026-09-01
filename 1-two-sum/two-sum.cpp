class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        unordered_map<int,int>mp;
        int sum = 0;
        for(int i =0;i<n;i++)
        {
            sum = target - nums[i];
            if(mp.find(sum)!=mp.end())
            {
                return {mp[sum],i};
            }
            mp.insert({nums[i],i});
        }
        return {};
    }
};