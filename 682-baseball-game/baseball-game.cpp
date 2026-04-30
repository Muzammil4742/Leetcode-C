class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> arr; 
        int n = operations.size();
        int j = 0;

        for(int i = 0; i < n; i++)
        {
            if(operations[i] == "C")
            {
                if(j > 0) {
                    arr.pop_back();
                    j--;
                }
            }
            else if(operations[i] == "D")
            {
                arr.push_back(arr[j-1] * 2);
                j++;
            }
            else if(operations[i] == "+")
            {
                arr.push_back(arr[j-1] + arr[j-2]);
                j++;
            }
            else
            {
                arr.push_back(stoi(operations[i])); 
                j++;
            }
        }
        int sum = 0;
        for(int x=0; x < arr.size() ;  x++)
        {
            sum += arr[x];
        }

        return sum;
    }
};