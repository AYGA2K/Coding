#include<iostream>
using namespace std;

class shape
{
protected:
float L ;
float H ;
  /* data */
public:
  shape ();
  shape( float h, float l );
 

  
};
shape::shape(){}

shape::shape(float h, float l )
{
  H=h;
  L=l;
}




class Triangle:public shape
{
private:
  /* data */
public:
 Triangle (float h,float l );
   void area (  ){

        
         float air =(L*H)/2;
         cout<<  "the area of the Triangle is:" << air <<endl;
         
   
    }

  
};
Triangle:: Triangle (float h,float l ):shape(h,l){

}

class Rectangle:public shape
{
private:
  /* data */
public:
Rectangle (float h,float l );
   void area (  ){

        
         cout<< "the area of the rectangle is:" <<L*H<<endl;
         
   
    }

  
};
Rectangle:: Rectangle (float h,float l ):shape(h,l){

}




int main()
{
  
  Triangle tri1 (10,5) ;
  tri1.area();
   Rectangle rect1(5,4);
   rect1.area();
  
  return 0;
}