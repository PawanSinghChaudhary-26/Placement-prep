#include<iostream>
using namespace std;



void printArray(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void revArray(int arr[],int size)
{
    int start = 0; int end = size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
/*void revArray(int arr[],int size)
{
    for(int i=size-1 ;i>=0;i--)
    cout<<arr[i]<<" ";
}*/
int main()
{
    int rev[50];
    int x; cout<<"enter the size : "; cin>>x;

    for(int i=0;i<x;i++)
    cout<<"enter the elements \n";
    cin>>rev[i];

    revArray(rev,x);
    printArray(rev,x);
    /*for(int i=0;i<x;i++)
    cout<<rev[i]<<" ";*/

    return 0;

}