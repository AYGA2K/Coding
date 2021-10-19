#include<iostream>
#include<string>
using namespace std;
 int main()
 {  
    
    string unformatted_full_name {"StephenHawking"};
    
    

   string First_name {unformatted_full_name,0,7};
  // string Last_name {unformatted_full_name,7,14};
  string Last_name{unformatted_full_name.substr(7,7)};

  string formatted_full_name=First_name+ Last_name;
  
  formatted_full_name.insert(7," ");

  cout<<formatted_full_name<<endl;

     return 0;
 }