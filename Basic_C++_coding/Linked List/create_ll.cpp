#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
int main()
{
    node * n1=new node();
    cout<<n1->data<<endl;
    cout<<n1->next;

    return 0;
}