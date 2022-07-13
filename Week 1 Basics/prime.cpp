#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"Invalid Input \n";
        exit(1);
    }
    bool flag=0;
    for(int i=2;i<n/2; i++)
    {
        if(n%i==0)
        {
            
        cout<<"not a prime number";
        flag=1;
        break;
        }
        
    }
        if(flag==0)
        {
        cout<<"prime number";
        }
    return 0;
}