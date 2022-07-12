class Solution {
public:
    int bitwiseComplement(int n) {
        
        int a=n;
        int mask=0;
        if(n==0)
            return 1;
        while(a!=0)
        {
            mask=(mask << 1)|1;
            a=a>>1;
        }
        int sol=(~n)&mask;
        return sol;
    }
    
};