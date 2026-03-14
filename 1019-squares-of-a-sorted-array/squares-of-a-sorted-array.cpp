class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        int pos = n - 1;  // start filling result from the end

        while(left <= right) {
            if(abs(nums[left]) > abs(nums[right])) {
                result[pos] = nums[left] * nums[left];  // square while placing
                left++;
            } else {
                result[pos] = nums[right] * nums[right];  // square while placing
                right--;
            }
            pos--;
        }

        return result;
    }
};
