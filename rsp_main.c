#include<stdio.h>
#include<stdlib.h>
#include"rps.c"
#include"rps2.c"
int main()
{
	int s;
	printf("Enter your choice: \n1 for Single player game \n2 for Two player game\n");
	scanf("%d",&s);
	switch(s)
	{
	case 1: printf("You have chosen Single player game. Let's begin!");
		pvc();
		break;
	case 2: printf("You have chosen Two player game. Let's begin!");
		pvp();
		break;
	default: printf("Please enter a appropriate choice");
	}
	return 0;
}
