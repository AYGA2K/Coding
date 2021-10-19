#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<vector<int>>movie_ratings
   {
  {1,2,3},
  {1,2,3}
 
   };


     cout<<"Rating : " << movie_ratings.at(0).at(1)<<endl;
 
 
 
  
 
    return 0;
}
