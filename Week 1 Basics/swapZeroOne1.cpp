#include<iostream>
using namespace std;

// BRUTE FORCE METHOD
void sortX(int abc[],int size)
{
    int zero=0,one=0;
    for(int i=0;i<size;i++)
    {
        if(abc[i]==0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    cout<<zero<<" "<<"zeros"<<endl;
    cout<<one<<" "<<"ones"<<endl;
    for(int i=0;i<size;i++)
    {
        if(i<zero)
        {
            abc[i]=0;
        }
        else
        {
            abc[i]=1;
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
    int x[10]={1,0,1,1,0,1,0,1,0,0};

    sortX(x,10);
    printX(x,10);
    return 0;

}