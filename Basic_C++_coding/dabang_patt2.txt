#include<iostream>
using namespace std;
int main()
{

      int n=5;
      //cin>>n;
      //cout<<"enter the value of n";
    int i=0;
  
    while(i<=n)
    {
        int j=1;
       
        while(j<=n-i)
        {
            cout<<j<<" ";
           j++;
        }
         
        int star=i*2;
        while(star)
        {
            cout<<"*"<<" ";
            star--;
        }
        int nums=n-i;
        while(nums)
        {
            cout<<nums<<" ";
            nums--;
        }
        cout<<endl;
        i++;
       
        
    }
}
