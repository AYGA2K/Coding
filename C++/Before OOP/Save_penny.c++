#include<iostream>
#include<string.h>
 using namespace std;

int save (int n, int amount=1 )
{  if (n==1)
 { return amount;}
  

 
  return save (--n,2*amount);
 
  
}
 int main()
 {
     
  int  total =save (3);
  cout<<total<<endl;
     return 0;
 }