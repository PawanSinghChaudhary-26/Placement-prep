class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=0;
   
   for(int i=0;i<nums.size();i++)
   {
       if(nums[i]==target)
       {
           index= i;
           break;
       }
       else
       {
           if(target>nums[nums.size()-1])
           {
               index= nums.size();
               break;
           }
           else if(nums[i]<target && nums[i+1]>target)
           {
               index=++i;
               break;
           }
       }
   }
        return index;
    }};

