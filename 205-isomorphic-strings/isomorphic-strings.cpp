class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {

                // if characters in s are same
                if (s[i] == s[j]) {
                    // then characters in t must also be same
                    if (t[i] != t[j]) {
                        return false;
                    }
                }
                // if characters in s are different
                else {
                    // then characters in t must also be different
                    if (t[i] == t[j]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};