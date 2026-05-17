class Solution {
public:
    string ans ="a";
    char kthCharacter(int k) {
        if(ans.size() >= k)
        {
            return ans[k-1];
        }
        int n =  ans.size();
        for(int i=0 ; i< n; i++)
        {
           
            int check = ans[i];
            int  res = check + 1;
            char res_char = res;
            ans = ans + res_char;
            
        }
        return kthCharacter(k);
    }
};