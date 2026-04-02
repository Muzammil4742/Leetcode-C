class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remainderCount;
        remainderCount[0] = 1;  // base case

        int prefixSum = 0;
        int result = 0;

        for (int num : nums) {
            prefixSum += num;

            int rem = prefixSum % k;

            // Handle negative remainder
            if (rem < 0) rem += k;

            // Check if this remainder was seen before
            if (remainderCount.find(rem) != remainderCount.end()) {
                result += remainderCount[rem];
            }

            // Store current remainder
            remainderCount[rem]++;
        }

        return result;
    }
};