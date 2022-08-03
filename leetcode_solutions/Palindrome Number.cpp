class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        long int ans=0;
        while(x>0)
        {
            ans=ans*10+x%10;
            x=x/10;
        }
        
        if(ans==a)
        {
            return true;
        }
        else
        {
            return false;
        }
      
    }
};