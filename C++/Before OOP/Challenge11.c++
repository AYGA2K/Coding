#include<iostream>
using namespace std;
#include<vector>

 vector <int> Add (vector<int> &vec )
  {

  int Added_number;
  cout<<"please add a  number"<<endl;
  cin>>Added_number;
  vec.push_back(Added_number);

  return vec;
  }

int main ()
{
 vector<int>vec;
 Add(vec);
for (auto &&i : vec)
{
    cout<<i<<endl;
}

 
  

    return 0;
}