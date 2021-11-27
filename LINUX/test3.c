#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  
  pid_t pid;
  int attente_fils,attente_pere;
  if (argc !=3)
  perror("usage:ex1 m\n ");
  attente_pere = atoi(argv[1]);
  attente_fils=atoi(argv[2]);
  switch (pid=fork()){
    case -1: 
    perror("fork error");break;

    case 0 :sleep(attente_fils);
    printf("fils attente finie \n ");break;
    default:sleep(attente_pere);
    printf("pere attente finie \n ");break;
  }



  return 0;
}
 