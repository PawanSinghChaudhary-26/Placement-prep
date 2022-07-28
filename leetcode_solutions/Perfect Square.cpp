class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=0,end=num;
        long int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(mid*mid==num)
            {
                return true;
            }
            if(mid*mid>num)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return false;
        
        
    }
};