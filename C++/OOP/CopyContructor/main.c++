# include <iostream>
using namespace std;

class personne
{
private:

 string name1;
	/* data */
public:
  void show (){
		cout<<name1<<endl;

	}
	personne( string name1 );
	~personne();
	personne( personne & p ) ;
	personne (){};
	};
   

personne::personne( string name1)
{
	 this->name1=name1;
}

personne::~personne()
{
	
}
personne:: personne  ( personne   &p ){
 
 this->name1=p.name1;


}
 
 class Etudiant :personne
 {
 private:
  string CIN;
	 /* data */
 public:
	 Etudiant(/* args */);
	 ~Etudiant();
	 Etudiant(/* args */ string name ) ;
 };
 
 Etudiant::Etudiant (){ cout<<"default"<<endl; };
 Etudiant:: Etudiant ( string cin ){

	CIN=cin; 
  
 }

 




int main(int argc, char const *argv[])
{
 personne p2 ("test");
 p2.show();
 /*
 personne p3 =personne("test1"); 
 p3.show(); 
 p3=p2; 
 p3.show(); */
   /*
   personne p3= p2;

   p3.show();

  */
 personne p3 =p2;
 
	return 0;
}
