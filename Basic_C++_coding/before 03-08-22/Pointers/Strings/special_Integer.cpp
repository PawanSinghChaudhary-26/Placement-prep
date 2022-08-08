#include<bits/stdc++.h>
using namespace std;
int getReverse(int n) 
{
    int rem,rev=0;
    while(n != 0)
    {
        rem = n % 10;
        rev = (rev*10) + rem;
        n /= 10;
    }
    return rev;
}

 int is_special(int input1[],int input2)
 {
    int spclCount = 0;
    for(int i=0;i<input2;i++) 
    {
        for(int j=1;j<((input1[i]/2)+1);j++) 
        {
            if(j+getReverse(j) == input1[i]) 
            {
                spclCount++;
                break;
            }
        }
    }
    
    return spclCount;
}



int main()
{
    int arr[2]={22,121};
    int n=2;
    cout<<is_special(arr,n);
    return 0;
}