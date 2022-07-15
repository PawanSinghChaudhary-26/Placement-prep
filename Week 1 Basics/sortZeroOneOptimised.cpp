#include<iostream>
using namespace std;

// USED TWO POINTER APPROACH 
void sortX(int abc[],int size)
{
    int left= 0,right= size-1;
    while(left<right)
    {
        if(abc[left]==0)
        {
            left++;
        }
        else if(abc[right]==1)
        {
            right--;
        }
        else{
            int temp=abc[right];
            abc[right]=abc[left];
            abc[left]=temp;
            left++; right--;
        }
    }
}


void printX(int abc[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<abc[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int x[10]; //={1,1,1,1,0,1,0,1,0,0};
    cout<<"enter the zeros & ones"<<endl;

    for(int i=0;i<10;i++)
    cin>>x[i];

    sortX(x,10);
    printX(x,10);

    return 0;
}