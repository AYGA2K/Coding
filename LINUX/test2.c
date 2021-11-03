#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main ()
{

  int i,j,k,
  n=5;
  pid_t fils_pid;
  for (i=1; i<n; i++  )
  {
    fils_pid =fork();
    if (fils_pid >0) 
    break;
    printf("processus %d avec pere %d\n ",getpid(),getpid());   
  }
  
  for ( j = 0; j < 100000 ; j++ )
  
    for ( k = 0; k < 1000; k++);
  
    
  
  

  
}