#include<iostream>
//#include<math.h>
using namespace std;
bool evenodd(int n)
{
    if(n&1==1)
       return 0;
    else
       return 1;
}
int main()
{
    int n;
     cout<<"enter the number";
     cin>>n;
    bool ans=evenodd(n);
    if(ans)
    {
    cout<<n<<" ="<<"even number"<<endl;
    }
    else
    cout<<n<<" ="<<"odd number"<<endl;
    
    return 0;
}