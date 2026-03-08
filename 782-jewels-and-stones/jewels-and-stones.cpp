class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    unordered_map<char,bool> mp;
    for(char ch: jewels)
    {
        mp[ch]= true;
    } 
    int count=0;

    for(char ch: stones)
    {
        if(mp[ch])
        {
            count++;
        }
    }



    // int count=0;
    // for(int i =0; i< jewels.size(); i++)
    // {
    //     for(int j =0; j< stones.size();j++)
    //     {
    //         if(jewels[i] == stones[j])
    //         {
    //             count++;
    //         }
    //     }
    // }
    return count;
    }
};




