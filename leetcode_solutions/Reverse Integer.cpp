class Solution {
public:
    int reverse(int x) {
        int rem=0, reverse=0;
        while(x!=0)
        {
            rem=x%10;
            if((reverse>INT_MAX/10)||(reverse<INT_MIN/10))  
            {
                return 0;
            }
            reverse= (reverse * 10) + rem;
            x=x/10;
            
        }
            return reverse;
          
    }
};
