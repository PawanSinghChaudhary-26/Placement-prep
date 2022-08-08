#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    //cin>>str;
    //getline(cin,str);
    //cout<<str;

    cout<<endl<<endl;
    string s1,s2;
    s1="Pawan";
    s2="Singh";
    cout<<s1+s2<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s2<<endl;

    cout<<s1[2];

    string strr="Ghiso aur Ghisao" ;
    cout<<str;
    strr.empty();
}