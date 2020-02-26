#include<stdio.h> 
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	
	pid_t pid;
	
	//path to collatz here
	char *a=argv[1];
	int num=atoi(a);
	char *args[] = {"./collatz",a, NULL};
	
	
	

	

	printf("Enter number (-1 to 100)\n");
	scanf("%d",&num);

	//input validation
	if (num < -1 || num > 100)
	{
		printf("Invalid\n");
		printf("Please enter an integer between -1 and 100\n");
		scanf("%d",&num);
	}
	else
	{	
		
				
		printf("You entered %d\n",num);

		pid=fork();
		
		
		if(pid==0)
		{
			
		//exec here
		wait(NULL);
		execvp(args[0], args);

		}

		
	}

	return 0;
}
