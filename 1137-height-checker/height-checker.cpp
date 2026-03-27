class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector <int> excepted = heights;
        sort(excepted.begin() , excepted.end());
         for(int i =0 ; i< heights.size() ; i++)
            {
                if(excepted[i]!=heights[i])
                {
                    count++;
                }
            }
        return count;
    }
};