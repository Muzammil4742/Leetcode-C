class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        // Step 1: square all elements
        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }

        // Step 2: two-end swapping logic
        bool swapped;
        do {
            swapped = false;

            // left to right
            for(int k = 0; k < n - 1; k++) {
                if(nums[k] > nums[k + 1]) {
                    swap(nums[k], nums[k + 1]);
                    swapped = true;
                }
            }

            // right to left
            for(int j = n - 1; j > 0; j--) {
                if(nums[j] < nums[j - 1]) {
                    swap(nums[j], nums[j - 1]);
                    swapped = true;
                }
            }

        } while(swapped);  // repeat until fully sorted

        return nums;
    }
};
