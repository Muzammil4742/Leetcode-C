class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(k>n)
        {
            return -1;
        }
        return nums[n-k];
    }
};