#include<iostream>
#include<vector>

using namespace std;
int main ()
{
   vector<int> test_scors {10,20,18,14,17,12,11};
   for (size_t i = 0; i < 7; i++)
   {
       cout<<"Student 1 "<<i+1<<"got :"<<test_scors.at(i)<<endl;  
       /* code */
   }
   
   

    return 0;
}
