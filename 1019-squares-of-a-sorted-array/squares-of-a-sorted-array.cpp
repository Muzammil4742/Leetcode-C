class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        // Step 1: square all elements
        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }

        
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        // Step 3: return the sorted array
        return nums;
    }
};
