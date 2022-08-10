#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++)
         {
             cin>>arr[i][j];
        
    }
    cout<<"\n";
    }

    for(int i=0;i<3;i++){
    int x=0;
         for(int j=2;j>=0;j--){
             if(x%2==0){
                 cout<<arr[j][x];
             }
             else
         {
              for(int j=0;j<=2;j++)
              {
                    cout<<arr[j][x];
              }
              
             
         }
        
    }
    x++;
  
    
    
    }
    return 0;
}