#include<iostream>
using namespace std;

class Personne
{
 protected:
  string nom ;
  string prenom; 
  string date_naissance;

 public:
  Personne();
  Personne( string name, string lname, string date_birth );

  void  Display(){
    cout<<" First name: "<<nom<<endl;
    cout<<"Last name: "<<prenom<<endl;
    cout<<" Date of birth: "<<date_naissance<<endl;

  }
  

};
 Personne::Personne (){

}

 Personne::Personne(string name, string lname, string date_birth ){
  nom=name;
  prenom=lname;
  date_naissance=date_birth;
}
class Employe:public Personne
{
protected:
 
 float salaire;
  
public:
Employe(  string name, string lname, string date_birth, float salary  );
void Display(){
    
    cout<<" First name: "<<nom<<endl;
    cout<<"Last name: "<<prenom<<endl;
    cout<<" Date of birth: "<<date_naissance<<endl;
    cout<<"  Salary : "<<salaire<<endl;
    
    

  }
};
  Employe::Employe ( string name, string lname, string date_birth, float salary):Personne(name,  lname, date_birth)
{
  salaire=salary;
}
class Chef:public Employe {
  protected:
  string champ_service;
  public:
  Chef(  string name, string lname, string date_birth, float salary , string champ_service);
  void Display(){
    
    cout<<" First name: "<<nom<<endl;
    cout<<"Last name: "<<prenom<<endl;
    cout<<" Date of birth: "<<date_naissance<<endl;
    cout<<"  Salary : "<<salaire<<endl;
    cout<<"service feild: "<<champ_service<<endl;cout<<" First name: "<<nom<<endl;
    cout<<"Last name: "<<prenom<<endl;
    cout<<" Date of birth: "<<date_naissance<<endl;
    cout<<"  Salary : "<<salaire<<endl;
    cout<<"service feild: "<<champ_service<<endl;

  }
  
};
Chef::Chef(string name, string lname, string date_birth, float salary , string service_feild):Employe(name,  lname, date_birth,salary)
{
  champ_service=service_feild;

}
  
  class Directeur:public Chef
  {
  protected:
   string champ_Societe;
  public:
    Directeur( string name, string lname, string date_birth, float salary , string service_feild,string company_feild );
    void Display(){
    
    cout<<" First name: "<<nom<<endl;
    cout<<"Last name: "<<prenom<<endl;
    cout<<" Date of birth: "<<date_naissance<<endl;
    cout<<"  Salary : "<<salaire<<endl;
    cout<<"service feild: "<<champ_service<<endl;cout<<" First name: "<<nom<<endl;
    cout<<"Last name: "<<prenom<<endl;
    cout<<" Date of birth: "<<date_naissance<<endl;
    cout<<"  Salary : "<<salaire<<endl;
    cout<<"Service feild: "<<champ_service<<endl;
    cout<<"Company feild: "<<champ_Societe<<endl;
  }
  
  };
  
  Directeur::Directeur(string name, string lname, string date_birth, float salary , string service_feild,string company_feild  ):Chef(name,  lname, date_birth,salary,service_feild)
  {
     champ_Societe=company_feild;
  }
  


int main ()
{
  
  Employe Employe1( "Ayoub","GAR","18-08-2000",10);
  
  Employe1.Display();
  cout<<("-------------------- Chef  -------------------")<<endl;
  Chef chef1("Ayoub","GAR","18-08-2000",10,"Something");
  
  chef1.Display();
  cout<<("----------------------Directeur-----------------")<<endl;
  Directeur Director( "Ayoub","GAR","18-08-2000",10,"Service","Societe" );
  Director.Display();

  return 0; 
}