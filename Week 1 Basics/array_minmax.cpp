#include<iostream>
#include<climits>
using namespace std;

int maxElement(int arr[] , int n)
{
    int maximum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        maximum=arr[i];
    }
    return maximum;
}

int minElement(int arr[] , int n)
{
    int minimum=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minimum)
        minimum=arr[i];
    }
    return minimum;
}

/*int maxElement(int arr[] , int n)
{
    int maximum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        maximum=arr[i];
    }
    return maximum;
}

int minElement(int arr[] , int n)
{
    int minimum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minimum)
        minimum=arr[i];
    }
    return minimum;
}*/

int main()
{
    int size;
    cout<<"enter the array size \n";
    cin>>size;
    cout<<"enter the elements \n";
    int pawan[50];

    for(int i=0;i<size;i++)
    cin>>pawan[i];

    cout<<"the maximum element is : "<<maxElement(pawan,size);
    cout<<endl;
    cout<<"the minimum element is : "<<minElement(pawan,size);

    return 0;
}