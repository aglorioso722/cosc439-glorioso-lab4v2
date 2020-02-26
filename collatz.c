
#include<stdio.h> 
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
  
// Taking argument as command line 
int main(int argc, char *argv[])  
{ 
	int n; 

	pid_t pid;
	
	// Convert string type to integer type	
	n=atoi(argv[1]);
	
	pid = fork();

	if (pid ==0)
	{
		printf("%d\n",n);
		while (n!=1)
		{
			if (n%2 ==0)
			{
				n=n/2;	
			}
			else if (n%2 == 1)
			{
				n = 3 * (n) + 1;

			}

			printf("%d\n",n);
		}
		
		printf("END \n");

	}
	else
	{
		printf("START\n");
		wait(NULL);
		
	}
	return 0;	
} 

