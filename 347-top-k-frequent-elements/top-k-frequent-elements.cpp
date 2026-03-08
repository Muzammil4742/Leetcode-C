class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        
        // count frequency
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        vector<pair<int,int>> v;

        // store hashmap into vector
        for(auto it : mp)
        {
            v.push_back(it);
        }

        // sort by frequency
        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
            return a.second > b.second;
        });

        vector<int> ans;

        // take top k elements
        for(int i = 0; i < k; i++)
        {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};