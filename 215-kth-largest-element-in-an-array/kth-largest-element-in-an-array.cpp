class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int,int> max_largest;
        
        // Step 1: store frequency
        for(int i = 0; i < n; i++) {
            max_largest[nums[i]]++;
        }

        // Step 2: store unique elements
        vector<int> unique;
        for(auto &it : max_largest) {
            unique.push_back(it.first);
        }

        // Step 3: sort in descending order
        sort(unique.begin(), unique.end(), greater<int>());

        // Step 4: find kth largest using frequency
        int count = 0;
        for(int num : unique) {
            count += max_largest[num];
            if(count >= k) {
                return num;
            }
        }

        return -1; // safety
    }
};