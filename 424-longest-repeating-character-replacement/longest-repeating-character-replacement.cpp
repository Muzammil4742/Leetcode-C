class Solution {
public:
    int characterReplacement(string s, int k) {
        int n= s.size();
        int freq[26] ;
        int maxFreq = 0;
        int maxWindow = 0 ;
        int window = 0;
        int l=0;
        int r=0;
        for(r; r<n; r++)
        {
            freq[s[r] - 'A']++;
            maxFreq = max(maxFreq ,freq[s[r] - 'A'] );
            window = r-l +1;
            if(window - maxFreq > k)
            {
                freq[s[l] - 'A']--;
                l++;
            }
            window = r-l + 1;
            maxWindow = max(maxWindow , window);
        } 
        return maxWindow;
    }
};

