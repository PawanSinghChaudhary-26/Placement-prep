#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}

int nCr(int a,int b)
{
 int num= fact(a);
 int den=(fact(b) * fact(a-b));
 int ans=num/den;
 return ans;
}

int main()
{
int a,b;
cin>>a>>b;

cout<<nCr(a,b);;

    return 0;
}