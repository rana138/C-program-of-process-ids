#include <stdio.h>
#include <unistd.h>

void main() {
 
printf("Parent processID is %d and Child process ID is %d\n", getppid(),getpid()); 
 
  }
