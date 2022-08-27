#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
     for(int i=2;i*i<=n; i++)
    {
        if(n%i==0)
        {
            
        return false;
        }       
    }
    return true;
}
int sieveOE(int arr[],int n)
{
    arr[0]=arr[1]=0;
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(prime(i))
        {
            count++;
            for(int j=2*i;j<n;j++)
            arr[j]=0;
        }
    }
    return count;
    
}
int main()
{
    int n;
    cout<<"enter the max value \n";
    cin>>n;
    int arr[n]={1};
    cout<<sieveOE(arr,n);
    return 0;
}
