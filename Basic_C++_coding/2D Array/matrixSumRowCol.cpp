#include<bits/stdc++.h>
using namespace std;

void rowSum(int arr[][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        int rowsum=0;
        for(int j=0;j<col;j++)
        {
            rowsum+=arr[i][j];
        }
        cout<<"sum of row :"<<i<<" "<<rowsum<<endl;
    }
}

void colSum(int arr[][3],int row,int col)
{
  for(int i=0;i<row;i++)
    {
        int colsum=0;
        for(int j=0;j<col;j++)
        {
            colsum+=arr[j][i];
        }
        cout<<"sum of col :"<<i<<" "<<colsum<<endl;
    }  
}

int main()
{
    int abc[3][3]={1,2,3,4,5,6,7,8,9};

    rowSum(abc,3,3);
    colSum(abc,3,3);
    return 0;
}