// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n=10;
    //cin>>n;
    int a=0,b=1;
     cout<<a<<" "<<b<<" ";
   while(n!=0)
    {
   
   int c=a+b;
  
   cout<<c<<" ";
   a=b;
   b=c;
   n--;
   
}
}