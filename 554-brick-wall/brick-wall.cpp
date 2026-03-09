class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        unordered_map<long long,int> mp;
        
        for(auto &row : wall)
        {
            long long sum = 0;

            for(int i = 0; i < row.size() - 1; i++)
            {
                sum += row[i];
                mp[sum]++;
            }
        }

        int maxFreq = 0;

        for(auto &it : mp)
        {
            maxFreq = max(maxFreq, it.second);
        }

        return wall.size() - maxFreq;
    }
};
// creat an cumulative frequency array and skip last element of each sub array 
// than 
// store these in a map 
// and then print the top most frequent element of map 