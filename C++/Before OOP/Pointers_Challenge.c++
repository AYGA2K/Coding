#include<iostream>
#include<string.h>
using namespace std;

int *applyall(int * const Array1 , int size1 , int * const Array2 , int size2)
{
    int *Result{nullptr};
    int size =size1*size2;
    Result=new int [size1*size2];
    int Pos=0 ;
   for (size_t i = 0; i < size2; i++)
   {
       for (size_t j = 0; j < size1; j++)
       {
         Result[Pos]=Array1[j]*Array2[i];
           Pos++;
       }
       
       
   }
   return Result;   
   
}





int main ()
{

    int Array1[]{1,2,3,4,5};
    int Array2[]{10,20,30};
    int size1{5};
    int size2{3};
    
   int * Result = applyall(Array1,size1,Array2,size2);
  for (size_t i = 0; i < size1*size2; i++)
  {
      cout<<Result[i]<<"\t";
  }
  delete[] Result;
   
   

    return 0;
}