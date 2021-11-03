#include <unistd.h>
#include <sys/types.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
  
  pid_t fils_pid;
  fils_pid=fork();
  
  if (fils_pid==0)
  printf("je suis le fils avec pid %d\n",getpid());
  else if (fils_pid>0)
  printf("je suis le pere avec pid %d\n ",getpid());
  else
  printf(" erreur dans la creation du fils \n");

 
  return 0;
}
