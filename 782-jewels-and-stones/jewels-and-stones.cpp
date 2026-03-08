class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for(char jw : jewels)
        {
            for(char st : stones)
            {
                if(st == jw)
                    ++cnt;
            }
        }
        return cnt;
    }
};