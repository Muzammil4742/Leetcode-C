class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_map<char, int> mp;

        // store allowed characters in hashmap
        for(int i = 0; i < allowed.length(); i++){
            mp[allowed[i]] = 1;
        }

        int count = 0;

        // check each word
        for(int i = 0; i < words.size(); i++){
            bool valid = true;

            for(int j = 0; j < words[i].length(); j++){
                
                if(mp[words[i][j]] == 0){
                    valid = false;
                    break;
                }
            }

            if(valid == true){
                count++;
            }
        }

        return count;
    }
};