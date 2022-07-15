#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// USED SWAP FUNCTION
void sortX(int abc[],int size)
{
   sort(abc,abc+size);

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
    int x[10]={1,0,1,1,0,1,0,1,0,0};

    sortX(x,10);
    printX(x,10);

    return 0;
}