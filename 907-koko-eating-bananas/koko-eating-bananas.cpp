class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int minSpeed = 1;
        sort(piles.begin(), piles.end());
        int maxSpeed = piles[n-1];
        while (minSpeed <= maxSpeed) {
            int mid = (minSpeed + maxSpeed) / 2;
            
            long long totalHours = 0;
            
            for (int i = 0; i < n; i++) {
                totalHours += (piles[i] + mid - 1) / mid;
            }
            
            if (totalHours > h) {
                minSpeed = mid + 1;
            } else {
                maxSpeed = mid - 1;
            }
        }
        
        return minSpeed;
    }
};