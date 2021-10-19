#include<iostream>
#include<string.h>
 using namespace std;
 
 void print_grocery_list ( int apples = 3, int oranges = 7, int mangos = 13 )
 {
  cout<<apples<<endl;
  cout<<oranges<<endl;
  cout<<mangos<<endl;

 }

 void modify_grocery_list(int apples, int oranges, int mangos)
 {

     print_grocery_list();
     print_grocery_list(5);
     print_grocery_list(7, 11);
 }
 
 int main ()
 {

 modify_grocery_list(4,5,8);


     return 0;
 }
