class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());   // fix: no tokens.sort

        int n = tokens.size();               // fix: you used l but later n
        int score = 0;
        int maxScore = 0;                   // track best score
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            if (tokens[start] <= power) {   // play face up
                power -= tokens[start];
                score++;
                start++;
                maxScore = max(maxScore, score);
            }
            else if (score > 0) {           // play face down
                power += tokens[end];
                score--;
                end--;
            }
            else {
                break;                     // no move possible
            }
        }

        return maxScore;
    }
};