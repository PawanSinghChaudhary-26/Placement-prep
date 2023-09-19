
#include<stdio.h>
using namespace std;
int main()
{
  int a=1,b=4,c=0,d;
  d=++a && ++b || ++c;
   
    printf("%d %d %d", d,a,c);
    return 0;
}