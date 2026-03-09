class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        unordered_map<long long,int> mp;
        for(int i =0 ; i<wall.size() ; i++)
        {
            
            long long freq=0;
            vector<int>& row = wall[i];
            for(int j=0 ; j< row.size() - 1 ; j++)
            {
                freq = freq + row[j];
                mp[freq]++;
            }
        }
        int maxFreq= 0;
        for(auto it = mp.begin(); it!= mp.end() ; it++  )
        {
            int temp = it->second;
            if(temp> maxFreq)
            {
                maxFreq = temp;
            }
        }
        return wall.size() - maxFreq;
    }
};
// creat an cumulative frequency array and skip last element of each sub array 
// than 
// store these in a map 
// and then print the top most frequent element of map 