#include<iostream>
#include<string>
using namespace std;
int main ()
{
  int a=5,c=4;
  int *b {&a} ,*d;
    *b=45;
  b=&c; 
  
 cout<<*b<<endl;
 cout<<a<<endl;
 cout<<c<<endl;
    return 0;

}