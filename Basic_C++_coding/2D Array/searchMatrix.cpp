#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(int arr[][3],int row,int col,int element)
{
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
        {
            if(arr[i][j]==element)

            return true;
        }
        
    }
    return false;
}

int main()
{
    int abc[3][3]={1,2,3,4,5,6,7,8,9};
    int element; cout<<"enter the element to search \n";
     cin>>element;

    if(searchMatrix(abc,3,3,element))
    {
        cout<<"element found\n";
    }
      
    else
        cout<<"element not found\n";

    return 0;
}