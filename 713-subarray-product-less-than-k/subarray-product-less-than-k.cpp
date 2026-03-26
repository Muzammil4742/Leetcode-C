class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n= nums.size();
        int l=0;
        int r=0;
        int count=0;
        int prod=1;
        for(r ; r<n ; r++)
        {
            prod *= nums[r];
            while(prod>=k)
            {
                prod = prod/nums[l];
                l++;
            }
            count = count + (r-l + 1);
        }
        return count;
    }
};
