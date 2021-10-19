#include<iostream>
#include<string>

using namespace std;
int main ()
{
  string Message{};  
  cout<<"Enter Something:"<<endl;
  getline(cin,Message);
  int k=Message.size();
  int i=0;
for ( i = 0; i < Message.size(); i++)
{
  for (int j = 0; j < k-1; j++)
  {
    cout<<" ";
  }
  for (size_t a = 0; a < i; a++)
  {
    cout<<Message[a];
  }
  cout<<Message[i];
  int b=i-1;  
 while (b>=0)
 {
   cout<<Message[b];
   b--;
 }
 
 
  cout<<endl;
  k=k-1;

}

 

    return 0;
}

