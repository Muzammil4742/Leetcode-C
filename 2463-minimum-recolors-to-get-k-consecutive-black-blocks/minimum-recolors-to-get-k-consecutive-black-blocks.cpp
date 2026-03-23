class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int change = 0;
        for(int i = 0; i < k; i++) {
            if(blocks[i] == 'W') {
                change++;
            }
        }
        int ans = change;
        for(int l = k; l < n; l++) {
            if(blocks[l - k] == 'W') {
                change--;
            }
            if(blocks[l] == 'W') {
                change++;
            }
            ans = min(ans, change);
        }
        return ans;
    }
};