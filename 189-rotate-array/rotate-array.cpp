class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseArray(nums,0,n-1);
        reverseArray(nums,0,k-1);
        reverseArray(nums,k,n-1);
    }
    void reverseArray(vector<int>&nums, int left, int right)
        {   
            int n = nums.size();
            while(left<right)
            {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }
};