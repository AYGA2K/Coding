#include<iostream>
using namespace std;

class Animal
{
protected:
string nom;
int age;

    
public:
   void set_value(){
       cout<<" Age: "<<endl;
       cin>>age;
       cout<<" Name: "<<endl;
       cin>>nom;
   
   }
};
class Zebra : public Animal
{
private:
    /* data */
public:
   void Display()
   {
       cout<<"Age is :"<< age<<endl;
       cout<<"Name is "<<nom<<endl;
       cout<<" Place of origin: Africa "<<endl;
   }
};
class Dolphin : public Animal
{
private:
    /* data */
public:
   void Display()
   {
       cout<<"Age is :"<< age<<endl;
       cout<<"Name is "<<nom<<endl;
       cout<<" Place of origin: Australia "<<endl;
   }
};






int main ()
{
    Zebra zebra1;
    Dolphin Dolphin1;
    zebra1.set_value();
    Dolphin1.set_value();
    
    zebra1.Display();
    cout<<" ------------------ "<<endl;
    Dolphin1.Display();

    return 0;
}