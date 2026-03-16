class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3] = {};
        int n = nums.size();
        for(int i=0 ; i<n ; i++)
        {
            if(nums[i]==0)
            {
                count[0]++;
            }
            else if(nums[i]==1)
            {
                count[1]++;
            }
            else
            {
                count[2]++;
            }            
        }
        int index=0;
        for(int i=0; i < count[0] ; i++)
        {
            nums[index] = 0;
            index++;
        }
         for(int i=0; i < count[1] ; i++)
        {
            nums[index] = 1;
            index++;
        }
          for(int i=0; i < count[2] ; i++)
        {
            nums[index] = 2;
            index++;
        }
    }
};
 