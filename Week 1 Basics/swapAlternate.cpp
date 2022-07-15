#include<iostream>
using namespace std;

void swapAlternate(int a[],int size)
{
    int start=0;
    int shift=1;
    while(shift<size)
    {
       /* swap(a[start],a[shift]);
        start+=2;
        shift+=2;*/
        int temp=a[start];
        a[start]=a[shift];
        a[shift]=temp;
        start+=2;
        shift+=2;
    }
}

void printArray(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main()
{
    int x;
    cout<<"enter the size of array :"; cin>>x;
    int abc[50];
    for(int i=0;i<x;i++)
    cin>>abc[i];

    swapAlternate(abc,x);
    printArray(abc,x);

    return 0;
}