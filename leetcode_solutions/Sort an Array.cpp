class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        return nums;
        /*for(int i=0;i<nums.size()-1;i++)
        {
            int min=i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[min])
                {
                    swap(nums[j],nums[min]);
                }
            }
        }
        return nums;
        /*for(int i=0;i<nums.size();i++)
        {
            bool swapped=false;
            for(int j=1;j<nums.size()-i;j++)
            { 
                if(nums[j]<nums[j-1])
                {
                    swap(nums[j],nums[j-1]);
                    swapped=true;
                }
            }
            if(swapped=false)
            {
                break;
            }
        }
        return nums;*/
    }
};