#include<bits/stdc++.h>
using namespace std;


int main()
{
    int abc[3][3];
    for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
                cin>>abc[j][i];
        }

        cout<<"row wise print \n";

        for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
            cout<<abc[i][j];
        cout<<endl;
        }

        cout<<"coloum wise print \n";
        for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
            cout<<abc[j][i];
        cout<<endl;
        }
    return 0;
}