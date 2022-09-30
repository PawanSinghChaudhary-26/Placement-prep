#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int num=7;
    int *ptr=&num;
    cout<<"value of num : "<<num<<endl;
    cout<<"value of ptr : "<<ptr<<endl;
    cout<<"value of *ptr : "<<*ptr<<endl;*/

    /*int a=11;
    int *ptr=&a;
    cout<<"value of a : "<< *ptr <<endl;
    cout<<"value of ptr : "<<ptr<<endl;
    ptr=ptr+1;
    cout<<"value of ptr : "<<ptr<<endl;
    //cout<<"value of a : "<< *ptr <<endl;
    //cout<<"value of ptr : "<<++(ptr)<<endl;
    //cout<<"value of a : "<< ++(*ptr) <<endl;*/

    int a=13;
   
    int *ptr=&a;
    cout<<"value of ptr "<<ptr<<endl;
    cout<<"value of *ptr "<<*ptr<<endl;
    /*cout<<"value of ptr "<<ptr<<endl;
    cout<<"value of ptr "<<*ptr<<endl; */
    int *q=ptr;
    cout<<"value of q "<<q<<endl;
    cout<<"value of *q "<<*q<<endl; 

    return 0;
}