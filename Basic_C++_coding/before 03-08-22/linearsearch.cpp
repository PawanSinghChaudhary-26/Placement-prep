#include<iostream>
using namespace std;

 bool linear(int abc[] ,int size , int key)
{
    for(int i=0;i<size;i++)
    if(abc[i]==key)
    {
        return 1;
    }
    /*else
    {
    return 0;
    }*/
    return 0;
}

int main()
{
    int arr[50];
    int size; cout<<"enter the size of the array \n"; cin>>size;
    for(int i=0;i<size;i++)
    cin>>arr[i];

    int value;
    cout<<"enter the value to search \n"; cin>>value;

    bool search=linear(arr,size,value);
    
    if(search)
    {
    cout<<"value matched \n";
    }
    else
    {
    cout<<"value not matched \n";
    }

    return 0;

}