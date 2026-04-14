class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        int ans = 0;
        int maxFreq = 0;

        for(auto it = freq.begin(); it != freq.end(); ++it) {
            if(it->second > maxFreq) {
                maxFreq = it->second;
                ans = it->first;
            }
        }

        return ans;
    }
};