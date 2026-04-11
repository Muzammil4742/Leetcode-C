class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        long left=0,right=nums.size()-1;
        while(left<right)
        {
            long mid=left+(right-left)/2;
            if(nums[mid]<nums[mid+1])
            left=mid+1;
            else 
            right=mid;
        }
        return left;
    }
};






// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n =  nums.size();
//         int index= 0;
//         if(n==2)
//         {
//             if(nums[0]>nums[1])
//             {
//                 return 0;
//             }
//             else if(nums[1]>nums[0])
//             {
//                 return 1;
//             }
//         }
//         for(int i=1; i< n ; i++)
//         {
//             if(i == n-1 )
//             {
//                 if(nums[i]> nums[i-1])
//                 {
//                     index = i;
//                     break;
//                 }
//             }
//             else
//             {
//             if(nums[i]> nums[i-1] && nums[i]> nums[i+1])
//             {
//                 index = i;
//                 break;
//             }
//             }
            
//         }
//         return index;
//     }
// };