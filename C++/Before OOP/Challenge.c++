#include<iostream>
using namespace std;
#include<vector>

int main()
{
    char Selection;
    int Smallest ,Added_number,Average {0} ,Sum{0} ;
    vector<int> vec;
  do
  {
      cout<<" A: add to list  "<<endl;
      cout<<" M: Calculate to average  "<<endl;
      cout<<" S: Display the smallest number in the list  "<<endl;
      cout<<" L: Display the largest number in the list  "<<endl;
     cin>>Selection;

     if ( Selection== 'A' || Selection=='a' )
     {
       cout<<"please add a number"<<endl;
       cin>>Added_number;
       vec.push_back(Added_number);
       cout<<Added_number << " added"<<endl;
     }
     else if ( Selection== 'M' || Selection=='m' )
     {
       for (int i = 0; i < vec.size(); i++)
       {
         Sum+=vec[i];
       }
       Average=Sum/vec.size();
       cout<<"Average is " << Average<<endl;

     }
      else if (Selection== 'S' || Selection=='s')
     {
        Smallest=vec[0];
        for (int i = 0; i < vec.size(); i++)
        {
          if (vec[i]<Smallest )
          {
            Smallest=vec[i];
          }
        }
        cout<<"Samllest is " << Smallest <<endl;
     }







      /* code */
  } while (Selection!='Q' || Selection!='q' );


    return 0;
}
