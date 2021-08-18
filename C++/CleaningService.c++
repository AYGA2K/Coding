#include<iostream>
using namespace std;
int main ()
{
  int Price_room=30;
  int Number_of_rooms;
  
  float Tax;
  float Total_estimate;

  cout<<" \t Hello to the cleaning service " <<endl;
 
  cout<<" \n How many room are you willing to clean:" <<endl;
  cin>>Number_of_rooms;
 
 cout<<"Price per room is 30$"<<endl;
cout<<"Tax is 6%"<<endl;

  int Cost = Price_room * Number_of_rooms ;

  cout<< "Cost is " <<Cost<<"$"<<endl;
  Tax= (6*100)/Cost;
  cout<< "Tax is " <<Tax <<"$"<<endl;
  Total_estimate=Tax+Cost;
  cout<<"Total estimate : "<<Total_estimate<<"$"<<endl;

 cout<<"This estimate is valid for 30 days"<<endl;

  return 0 ;
}