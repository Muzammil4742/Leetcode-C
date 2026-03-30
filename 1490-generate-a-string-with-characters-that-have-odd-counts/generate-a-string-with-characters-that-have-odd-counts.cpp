class Solution {
public:
    string generateTheString(int n) {
        string result = "";
        
        if(n % 2 == 0) {
            result.append(n - 1, 'a');
            result.push_back('b');
        } else {
            result.append(n, 'a');
        }
        
        return result;
    }
};