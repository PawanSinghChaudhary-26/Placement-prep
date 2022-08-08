#include<iostream>
using namespace std;
void ptr(int *aptr,int *bptr)
{
   *aptr=*aptr+*bptr;
   *bptr=*aptr-*bptr;
   *aptr=*aptr-*bptr;
}
int main()
{
    /*
    int *ptr=&arr[2];
    cout<<ptr;*/
    int a=10,b=20;
    cout<<a<<"  "<<b;
    cout<<endl<<endl<<endl;
   // cout<<*aptr<<endl<<endl;
    ptr(&a,&b);
    cout<<a<<"  "<<b;

    cout<<endl<<endl<<endl;
    int arr[5]={2,4,6,8,10};
    cout<<*arr;
    cout<<endl;
    cout<<*arr+1;
    cout<<endl;
    cout<<*(arr+2);
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl<<endl<<endl;
    
    int *p=&a;
    int *q=p;

    cout<< q;
    cout<<endl;
    cout<<*q;

    return 0;
}