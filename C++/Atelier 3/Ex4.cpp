#include<iostream>
using namespace std;

class mere
{
private:
    /* data */
public:
   void Display ()
   {
       cout<<"This is the parent class"<<endl;
   }
    
};

class fille : public mere
{
private:
    /* data */
public:
    void Display()
    {
        cout<<"This is the child class"<<endl;
    }

};







int main()
{
    mere parent;
    fille child;
    parent.Display();
    child.Display();
    

    return 0;
}
