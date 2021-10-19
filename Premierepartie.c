/*                                                       Mini Projet
                                                Module : Structures de données en C 
                                                         Réalisé par :
                                                       - Ayoub Garouat 
                                                       - Maha Chakur
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

typedef struct  Person
{

    char Nom [50];
    char Prenom [50];
    char CIN [50];

}Pr;


typedef struct 
{
    char Matricule [50];
    char Marque [50];
    float Prix_jour ;
    int Duree_Location;

}Voiture;


  typedef struct List
{
 int Id;
 Pr client;
 Voiture Voiture_Louee [100] ;
 
 struct List *next;

} Location ;


 

 Location *Ajouter_location (Location *L,  int n )
{
    Location *newlocation;
    newlocation = (Location*)malloc(sizeof(Location));
    int i;
   printf("ID:\n ");
   scanf("%s",&newlocation->Id );
   printf("Nom:\n");
   scanf("%s",newlocation->client.Nom);
   printf("Prenom:\n");
   scanf("%s",newlocation->client.Prenom);
   printf("CIN:\n");
   scanf("%s",newlocation->client.CIN);
   for (i=1;i<=n;i++)
   {
       printf("Voiture %d \n ",i);
       printf("Matricule: \n ");
       scanf("%s",newlocation->Voiture_Louee[i].Matricule);
       printf("Marque :\n ");
       scanf("%s",newlocation->Voiture_Louee[i].Marque);
       printf("Prix par jour :\n ");
       scanf("%f",&newlocation->Voiture_Louee[i].Prix_jour);
       printf("Duree de location :\n ");
       scanf("%d",&newlocation->Voiture_Louee[i].Duree_Location);

   }


  if (L==NULL)
  {
   newlocation->next=newlocation;
   L=newlocation;
  }
  else
  {
      Location *tmp=L;
      while(tmp!=L)
      {
          tmp=tmp->next;
      }
  {
      newlocation->next=L;
      tmp->next=newlocation;
  }
      return L;
  }
}



float calculer_prix_total(Location *L  )
{
    int i=1;
    Location *tmp;
    float prix_total=0;

    
    
    
        while(L->Voiture_Louee[i].Prix_jour!='\0')
        {    
        prix_total=prix_total + L->Voiture_Louee[i].Prix_jour * L->Voiture_Louee[i].Duree_Location;
        ++i;
        }

    return (prix_total);
}

 void  Enregistrer_location(Location *L, char nom_fichier[50],int n)
{
    FILE *F=NULL;
    int i=0;
    F=fopen(nom_fichier,"w+");
    fputs("Identificateur de la location : \n  Informations sur le client \n",F);
    Location *tmp;
    tmp=L;
    
    do
    {
        fprintf(F,"Identificateur de la location : \n ",tmp->Id);
        fputs("Informations sur le client : \n ",F);

        fprintf(F,"CIN du client : %s \n",tmp->client.CIN);
        fprintf(F,"Nom du client :%s \n",tmp->client.Nom);
        fprintf(F,"Prenom du client : %s \n",tmp->client.Prenom);
        

       while (tmp->Voiture_Louee[i].Prix_jour!='\0')
       {
        fputs("Informations sur les voitures louees: \n ",F);
        fprintf(F," Matricule de la voiture  %s \t",tmp->Voiture_Louee[i].Matricule);
        fprintf(F," Marque de la voiture  %s \t",tmp->Voiture_Louee[i].Marque);
        fprintf(F," prix par jour   %f \t ",tmp->Voiture_Louee[i].Prix_jour);
        fprintf(F," Durée de la location    %f \n ",tmp->Voiture_Louee[i].Duree_Location);
       }
        fprintf(F,"  Prix total à payer par le client : %f \n ",calculer_prix_total(tmp));
      tmp=tmp->next;
    }


    while ( tmp != L);

 fclose(F);

}
  
  void Afficher_list ( Location *L )
{
      int i;
    Location  *tmp;
  
    if (L==NULL)
    {
        printf("La liste est vide");
    }
    else
    {
        tmp=L;
do
{   
    printf("Identificateur de la location :");  
    printf("Informations sur le client :\n " );
     printf(" CIN du client : %s \t Nom du client : %s \t \t \t Prenom du client : %s  \n", tmp->client.CIN, tmp->client.Nom, tmp->client.Prenom);
    printf("Informations sur les voitures louees:\n");
    i=1;
while (tmp->Voiture_Louee[i].Prix_jour!='\0')
{
    
     printf("Matricule de la voiture: %s \t",tmp->Voiture_Louee[i].Matricule );
     printf("Marque de la voiture : %s \t",tmp->Voiture_Louee[i].Marque );
     printf(" prix par jour %f \t",tmp->Voiture_Louee[i].Prix_jour );
     printf(" Duree de la location: %d \n",tmp->Voiture_Louee[i].Duree_Location );
    
     ++i;
}  
    printf("Prix total a payer par le client : : %f \n",calculer_prix_total(tmp));
    tmp=tmp->next;
}    
    
while (tmp!=L);
    }
 


}


Location* rechercher_location(Location *L, char CIN[50] )
{
    Location *tmp;
    tmp=L;
    do
    {
       if (strcmp(tmp->client.CIN,CIN)==0)
       {
           return tmp;
       }
       else
        tmp=tmp->next;
    }
    while ( tmp != L);
    return NULL;
}

Location *suprimer_location(Location*L, char CIN[50] )
{
    Location *client_chercher;
    Location *tmp,*asup;
    client_chercher=rechercher_location(L,CIN);
   if ( L!=NULL )
   {  
       if ( client_chercher->next==client_chercher)
       {
           L=NULL;
           free(L);
           printf("Le client  a ete supprime avec succes \n ");
           return NULL;
       }
       else{
   tmp=L;
   do
   {

    if (strcmp (tmp->next->client.CIN,client_chercher->client.CIN)==0 )
    {
       asup=tmp->next;
       tmp->next=asup->next;
       asup=NULL;
       free(asup);
       printf("Le client a ete supprime avec succes \n ");

    }
       tmp=tmp->next;
    }
   while (tmp!=L);
       }
   return L;
   
   
} }

int Menu_general()
{
int ch;
printf("\n _________________Menu general ____________________\n\n");
printf("\n Ajouter une location : ________________taper 1 \n");
printf("\n Afficher locations : _______________taper 2 \n");
printf("\n Rechercher location : _______________taper 3 \n");
printf("\n Supprimer location : __________________________taper 4 \n");
printf("\n Enregistrer location : _________taper 5 \n");
printf("\n Veuillez entrer votre choix : \t ");
scanf("%d",&ch);
return (ch);
}


int main ()
{
 int i,j,n;
 Location *Location1=(Location *)malloc(sizeof(Location));
 Location1=NULL;
 Location  *Location_chercher=(Location *)malloc(sizeof(Location ));
 int choix;
 char cin[50],name_file[50];
 char nom [50], prenom[50], CIN[50];
 float Prix_jour;
 int duree_location;
 

 do
 {
     choix=Menu_general();
     switch (choix)
  {
     case 1:
     printf( "Entrer le nombre des voitures : \n " );
     scanf("%d",&n);
     Location1= Ajouter_location(Location1 ,n);
    

         break;
     case 2:
     Afficher_list(Location1);

     break;
     case 3:
      i=1;
     printf("Entrer le CIN: \n ");
     scanf("%s",CIN);
     Location_chercher= rechercher_location(Location1,CIN);
     printf(" Informations sur le client recherche : \n");
     printf("Nom: %s\n",Location_chercher->client.Nom);
     printf("Prenom: %s\n",Location_chercher->client.Prenom);
     printf("CIN: %s\n",Location_chercher->client.CIN);
     while (Location_chercher->Voiture_Louee[i].Prix_jour!='\0' )
     {
     printf("Matricule de la voiture: %s \t",Location_chercher->Voiture_Louee[i].Matricule );
     printf("Marque de la voiture : %s \t",Location_chercher->Voiture_Louee[i].Marque );
     printf(" prix par jour %f \t",Location_chercher->Voiture_Louee[i].Prix_jour );
     printf(" Duree de la location: %d \n",Location_chercher->Voiture_Louee[i].Duree_Location );
    
     ++i;
         /* code */
     }
     
     break;
     case 4:
     printf("Entrer le CIN: \n ");
     scanf("%s",cin);
      Location1= suprimer_location(Location1,cin);
     
    
     break;
     case 5:
     printf("Entrer le nom de fichier:\n");
     scanf("%s",name_file);
     Enregistrer_location(Location1,name_file, n);
    
     break;
     default : {
     printf("\n Verifier votre choix !!!\n");
     break;
     }
  }
 }
   while (choix!=0);

    return 0;
}
