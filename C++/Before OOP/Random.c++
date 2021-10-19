#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;
int main ()
{
  int random_number;
  size_t count{10};
  int max=6;
  int min{1};

  srand(time(nullptr));

 for (size_t i = 0; i < count; i++)
 {
     random_number=rand() % max+min;
     cout<<random_number<<endl;
 }
 

 
    return 0;
}