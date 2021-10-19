#include<iostream>
#include<vector>

using namespace std;
int main(){
int data_number,data_item;
 vector<int> vector;
 cout<<"how many data are willing to store "<<endl;
cin>>data_number;

for (int i = 0; i < data_number ; i++)
{
    cout<<"Enter data number "<<i+1<<":"<<endl;
    cin>>data_item;
    vector.push_back(data_item);
}
cout<<endl;

for (auto &&i : vector)
{
    cout<<i<<"\t";
}               




    return 0;
}