#include<iostream>
using namespace std;

class imaginaire
{
private:
  /* data */
  int realpart1;
  int imaginpart1;
  int realpart2;
  int imaginpart2;
public:
  imaginaire(/* args */);
 

  void Addition (){
     cout<<"Enter the real part of num1: "<<endl;
    cin>>realpart1;
    cout<<"Enter the imaginary part of num1: "<<endl;
    cin>>imaginpart1 ;
    cout<<"Enter the real part of num2: "<<endl;
    cin>>realpart2;
    cout<<"Enter the imaginary part of num2: "<<endl;
    cin>>imaginpart2 ;

    cout<<" Addition : "<<realpart1+realpart2<<"+"<<imaginpart1+imaginpart2<<"i"<<endl;
    
  }

  void Subtraction (){
     cout<<"Enter the real part of num1: "<<endl;
    cin>>realpart1;
    cout<<"Enter the imaginary part of num1: "<<endl;
    cin>>imaginpart1 ;
    cout<<"Enter the real part of num2: "<<endl;
    cin>>realpart2;
    cout<<"Enter the imaginary part of num2: "<<endl;
    cin>>imaginpart2 ;

    cout<<" Subtraction : "<<realpart1-realpart2<<"+"<<imaginpart1-imaginpart2<<"i"<<endl;
    
  }
   void Multiplication (){
     cout<<"Enter the real part of num1: "<<endl;
    cin>>realpart1;
    cout<<"Enter the imaginary part of num1: "<<endl;
    cin>>imaginpart1 ;
    cout<<"Enter the real part of num2: "<<endl;
    cin>>realpart2;
    cout<<"Enter the imaginary part of num2: "<<endl;
    cin>>imaginpart2 ;
    int real1=realpart1*realpart2;
    int imagin1=realpart1*imaginpart1;
    int imagin2=imagin1*realpart1;
    int real2=-imagin1*imagin2;

    cout<<" Subtraction : "<< real1+real2 <<"+"<<imagin1+imagin2<<"i"<<endl;
    
  }

  void Division(){
    cout<<"Enter the real part of num1: "<<endl;
    cin>>realpart1;
    cout<<"Enter the imaginary part of num1: "<<endl;
    cin>>imaginpart1 ;
    cout<<"Enter the real part of num2: "<<endl;
    cin>>realpart2;
    cout<<"Enter the imaginary part of num2: "<<endl;
    cin>>imaginpart2 ;
    
    int real1=(realpart1*realpart2+ imaginpart1*imaginpart2)/(realpart2*realpart2+imaginpart2*imaginpart2) ;
    int imagin1=(imaginpart1*realpart2-realpart1*imaginpart2)/(realpart2*realpart2+imaginpart2*imaginpart2);
     cout<<" Division : "<< real1 <<"+"<<imagin1<<"i"<<endl;


  }

  

};

imaginaire::imaginaire(/* args */)
{
}

int main (){
  imaginaire num1;
  num1.Division();
  
  


  return 0;
}