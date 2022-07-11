#include<iostream>
using namespace std;
int main()
{

      int n=4;
     // cout<<"enter the value of n";
      //cin>>n;
      
    int i=1;
  
    while(i<=n)
    {
        int j=n;
       
        while(j>=i)
        {
            cout<<"*"<<" ";
           j--;
        }
        int k=1;
        while(k<=i)
        {
            cout<<"a"<<" ";
            k++;
        }
        int l=2;
        while(l<=i)
        {
            cout<<"a"<<" ";
            l++;
        }
        cout<<endl;
        i++; 
    } 
    int a=2;
    while(a<=n)
    {
         int m=1;
       
        while(m<=a)
        {
            cout<<"*"<<" ";
           m++;
        }  
    
     int x=n-a+1;
     while(x!=0 && x<=n)
     {
        cout<<"a"<<" ";
        x--;
     }
      int y=n-a;
     while(y!=0 && y<=n)
     {
        cout<<"a"<<" ";
        y--;
     }
        cout<<endl;
        a++;
    }
}
