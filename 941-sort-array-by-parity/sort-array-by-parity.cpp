class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> numseven;
        vector<int> numsodd;

        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(nums[i] % 2 == 0)
            {
                numseven.push_back(nums[i]);
            }
            else
            {
                numsodd.push_back(nums[i]);
            }
        }

        // Combine both vectors
        numseven.insert(numseven.end(), numsodd.begin(), numsodd.end());

        return numseven;
    }
};