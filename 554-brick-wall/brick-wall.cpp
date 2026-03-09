class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        unordered_map<long long,int> mp;
        for(int i =0; i< wall.size();i++)
        {
          vector<int>& row = wall[i];
            long long sum=0;
            for(int j=0 ; j<row.size() - 1;j++)
            {
                sum= sum + row[j];
                mp[sum]++;
            }
        }

        int maxFreq = 0;

     for(auto it = mp.begin(); it != mp.end(); it++)
{
    int freq = it->second;

    if(freq > maxFreq)
    {
        maxFreq = freq;
    }
}

        return wall.size() - maxFreq;
    }
};
// creat an cumulative frequency array and skip last element of each sub array 
// than 
// store these in a map 
// and then print the top most frequent element of map 