class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> reminderCount;
        reminderCount[0] = 1;

        int prefix = 0;
        int result = 0;

        for(int i = 0; i < nums.size(); i++) {
            prefix += nums[i];

            int rem = prefix % k;

            if(rem < 0) {
                rem += k;
            }

            if(reminderCount.find(rem) != reminderCount.end()) {
                result += reminderCount[rem];
            }

            reminderCount[rem]++;
        }

        return result;
    }
};