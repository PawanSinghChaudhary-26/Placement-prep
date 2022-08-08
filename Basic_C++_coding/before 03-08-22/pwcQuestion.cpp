#include<bits/stdc++.h>
using namespace std;
int checkNumber(int n)
{
    for(int i=1;i<n;i++)
    {
        bool flag=true; int ans,num=n-i;
        while(num>0)
        {
            ans=num%10;
            num=num/10;
            if(num!=ans)
            flag=false;
            else
            flag=true;
        }
        if(flag==true)
        {
          break; 
        }
         //return num;
         return num;
    }
   
};

int main()
{
    int x;
    cout<<"enter the number to find its nearest smaller number having same digits  \n" ;
    cin>>x;
    cout<<"the nearest number is : "<<checkNumber(x);
    return 0;
}