class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> seen(nums1.begin(), nums1.end());
        vector<int> ans;

        for(int i = 0; i < nums2.size(); i++)
        {
            if(seen.count(nums2[i]))
            {
                ans.push_back(nums2[i]);
                seen.erase(nums2[i]);
            }
        }
        return ans;
    }
};