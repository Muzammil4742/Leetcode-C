class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        int n = s2.size();

        if (k > n) return false;

        vector<int> freq1(26, 0), freq2(26, 0);

        // Step 1: store frequency of s1 and first window of s2
        for (int i = 0; i < k; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // Step 2: check first window
        if (freq1 == freq2) return true;

        // Step 3: sliding window
        for (int i = k; i < n; i++) {
            // add new character
            freq2[s2[i] - 'a']++;

            // remove old character
            freq2[s2[i - k] - 'a']--;

            // compare
            if (freq1 == freq2) return true;
        }

        return false;
    }
};