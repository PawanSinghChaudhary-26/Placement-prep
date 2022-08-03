#include<iostream>
using namespace std;

int sumArray(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout<<"enter the size of the array \n"; cin>>size;
    int abc[50];
    for(int i=0;i<size;i++)
    cin>>abc[i];

    cout<<"sum of the array is :"<<sumArray(abc,size)<<endl;

    return 0;
}