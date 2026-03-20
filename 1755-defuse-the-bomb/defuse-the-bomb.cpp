class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n);  // store answers separately

        if (k > 0) {
            for (int i = 0; i < n; i++) {
                int sum = 0;
                int index = i + 1;

                for (int j = 0; j < k; j++) {
                    sum += code[index % n];   // wrap around
                    index++;
                }
                result[i] = sum;
            }
        }

        else if (k < 0) {
            k = -k;  // make it positive for loop

            for (int i = 0; i < n; i++) {
                int sum = 0;
                int index = i - 1;

                for (int j = 0; j < k; j++) {
                    sum += code[(index + n) % n];  // wrap around
                    index--;
                }
                result[i] = sum;
            }
        }

        else { // k == 0
            for (int i = 0; i < n; i++) {
                result[i] = 0;
            }
        }

        return result;
    }
};