class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Step 1: Count frequency
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        // Step 2: Move to vector
        vector<pair<char, int>> vec;
        for (auto it = freq.begin(); it != freq.end(); it++) {
            vec.push_back(*it);
        }

        // Step 3: Sort (simple function instead of lambda)
        sort(vec.begin(), vec.end(), cmp);

        // Step 4: Build result
        string result = "";
        for (int i = 0; i < vec.size(); i++) {
            for (int j = 0; j < vec[i].second; j++) {
                result += vec[i].first;
            }
        }

        return result;
    }

    // Simple comparator function
    static bool cmp(pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    }
};