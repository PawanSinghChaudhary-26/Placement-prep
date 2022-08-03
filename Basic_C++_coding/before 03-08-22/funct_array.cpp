#include<iostream>
using namespace std;

void funArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
    arr[i]=2;
    cout<<arr[i]<<" ";
    }
}

int main()
{
   int abc[10];
   funArray(abc,10);
   cout<<endl;

   //calculating the length of array
   int size=sizeof(abc)/sizeof(int);
   cout<<size<<endl;

     //calculating the size of array
   int size1=sizeof(abc);
   cout<<size1;

}
