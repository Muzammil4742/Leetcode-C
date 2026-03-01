class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {       
                if (s[i] == s[j]) {              
                    if (t[i] != t[j]) {
                        return false;
                    }
                }
                else {
                    if (t[i] == t[j]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};