#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the value \n";
    cin>>x;
    int a;
    cout<<"enter the option \n";
    cin>>a;
    int result=0;
   while(x!=0)
   {
       switch(a)
       {
           case 1:
            result=x/100;
            cout<<"100 rupees notes="<<" "<<result<<endl;
            x=x%100;
            
           case 2:
           result=x/50;
           cout<<"50 rupees notes="<<" "<<result<<endl;
           x=x%50;
        
           case 3:
           result=x/20;
           cout<<"20 rupees notes="<<" "<<result<<endl;
           x=x%20;
        
           case 4:
           result=x/1;
           cout<<"1 rupees notes="<<" "<<result<<endl;
           x=x%1;
           break;
           
           default: cout<<"invalid selection or invalid amount \n";
           exit(1);
       }
    }
}
