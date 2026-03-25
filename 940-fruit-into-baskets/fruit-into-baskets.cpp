class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int> mp;
        int start=0;
        int currLen =0;
        int maxLen=0;
        for(int end=0 ; end< n ; end++)
        {
            mp[fruits[end]]++;
            while(mp.size()>2)
            {
                mp[fruits[start]]--;
                if(mp[fruits[start]] == 0)
                mp.erase(fruits[start]);
                start++;
                
            } 
            currLen= end-start + 1;
            maxLen = max(maxLen , currLen);
        }
          return maxLen;
    }
};