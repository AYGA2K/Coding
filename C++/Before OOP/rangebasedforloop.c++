#include<iostream>
#include<vector>

using namespace std;

int main()
{
 /* int Array[] {10,60,90};
for ( auto number:Array)
{
    cout<<number<<endl;
}

cout<<endl;
  
 for (auto &&i : Array)
 {
     cout<<i<<endl;
 }
 */
 vector<int> Scores{10,50,90,40};
 for (auto &&i : Scores)
 {
     i*=i; 
     cout<<i<<endl;
 }
 
  
    return 0;
}