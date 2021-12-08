#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Vector
{
private:
  vector<float> vect;
public:
  Vector();
  void Display ()
  {
    cout<<"("<<vect[0]<<","<<vect[1]<<","<<vect[2]<<")"<<endl;
  }
  
  vector<float> somme ( vector<float> vect1,vector<float>vect2 ){

    vector<float>vect3;
    for (size_t i = 0; i < vect1.size(); i++)
    {
      vect3[i]=vect1[i]+vect2[i];

    }
    
     return vect3;
  }

  vector<float> Multiplication ( vector<float> vect1,vector<float>vect2 ){

    vector<float>vect3;
    for (size_t i = 0; i < vect1.size(); i++)
    {
      vect3[i]=vect1[i]*vect2[i];

    }
    
     return vect3;
  }

   void meme_comp ( vector<float> vect1,vector<float>vect2 ){

    
    for (size_t i = 0; i < vect1.size(); i++)
    {
       if ( vect1[i]==vect2[i])
       {
         cout<<vect1[i]<<"="<<vect2[i]<<endl;
       }
      else {
        cout<<vect1[i]<<"!="<<vect2[i]<<endl;
      }


    }
    
  
  }
  
  float norme ( vector<float> vect1 ){

    float some_pow=0  ; 
    for (size_t i = 0; i < vect1.size(); i++)
    {
      float power=pow(vect1[i],2);
      some_pow+=power;
    }
    float norme=sqrt(some_pow*1);
     return norme;
  }

};

Vector::Vector()
{
  for (size_t i = 0; i < 3; i++)
  {
    vect.push_back(0);
  }
  
}

int main (){
 
  Vector vect1;
  vector<float>vect{1,1,1};
  vector<float>vecto{2,2,2};
   cout<<vect1.norme(vect)<<endl;
   vect1.somme(vect,vecto);

  return 0;
}
