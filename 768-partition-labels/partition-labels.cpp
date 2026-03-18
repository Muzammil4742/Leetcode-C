class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> last(26, 0);
        
        // Step 1: store last occurrence
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        vector<int> result;
        int start = 0;
        int end = 0;

        // Step 2: traverse string
        for (int i = 0; i < s.size(); i++) {
            end = max(end, last[s[i] - 'a']);  // update end
            
            if (i == end) {  // partition found
                result.push_back(end - start + 1);
                start = i + 1;
            }
        }

        return result;
    }
};
// we need to store the last index of each character like when last a appear 
// store this in a tabular array you can say 
// then start from 
// the start if the a appear 
// intialize it as starting and tabular index of  as endstring 
// now move next if next character is same move next 
// if different 
// check for the end value fo this character if it less no change 
// if it is greater 
// end string value = this value 


// one its done find the next substring 