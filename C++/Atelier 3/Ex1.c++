#include<iostream>
using namespace std;

class Myclass
{
private:
  int a=12;
public:
 void print()
 {
   cout<<a<<endl;
 }

  Myclass(/* args */);

  ~Myclass();
};

Myclass::Myclass(/* args */)
{
}

Myclass::~Myclass()
{
}


int main(int argc, char const *argv[])
{
  
  Myclass C1;
  C1.print();

  return 0;
}
