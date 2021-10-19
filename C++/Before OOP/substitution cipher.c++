#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key     {"fghijklmnopqrstuvwxyzabcdeFGHIJKLMNOPQRSTUVWXYZABCDE"};

  string Message {} ;
  
   string Encrypted_Message {} ;

  cout<<"Enter your message ";
  getline(cin,Message);
  for (auto &&c : Message)
{
   size_t position = alphabet.find(c);
   char newchar {key.at(position)};
   if (position!=string::npos)
   {
       Encrypted_Message+=c;
   }else
   {
   Encrypted_Message+=newchar;
  }
}
cout<<Encrypted_Message<<endl;

    return 0;
}