#include<iostream>
using namespace std;

void printWave(int arr[][3],int row,int col)
{
    int colm=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(colm % 2!= 0)
            {
                cout<<arr[j][i]<<" ";
        
            }
            else
            {
                cout<<arr[colm-j][i]<<" ";
                
        
            }
          
        }
          colm++;
        //cout<<endl;
    }
    
}

int main()
{
    //int row,col;cout<<"enter rows & Coloumns \n";
    //cin>>row>>col;
    int arr[3][3];
    cout<<"enter the elements \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {cin>>arr[i][j];}
        
    }
    
    printWave(arr,3,3);
     
    return 0;


    /*for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<< arr[i][j];
        }
        cout<<endl; 
    }*/
}