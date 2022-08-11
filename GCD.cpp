#include<bits/stdc++.h>
using namespace std;
int findGCD(int a,int b)
{
    if(a==0 || b==0)
        return b;
    while(a!=b)
    {
        
        if(a<b){ b=b-a;}
       
        else{a=a-b;}
    }
    return a;
}
int main()
{
    int a,b; cout<<"enter the number to find the greatest common divisor \n";
    cin>>a>>b;
    int ans=findGCD(a,b);
    cout<<"the greatest common divisor is : "<<ans;
    

    return 0;
}