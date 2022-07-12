// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=2;i<=n;)
    {
        if(n%i==0)
        {
        cout<<"not a prime number";
        break;
        }
        else
        cout<<"prime number";
        break;
        i++; 
    }
    return 0;
}