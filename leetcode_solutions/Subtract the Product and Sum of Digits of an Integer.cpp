class Solution {
public:
    int subtractProductAndSum(int n) {
      
        int sum=0;
        int product=1;
        while(n!=0)
        {
            int num=n%10;
            product=product*num;
            sum=sum+num;
            n=n/10;
        }
        int result=product-sum;
        return result;
    }
};