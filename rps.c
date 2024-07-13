#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
int pvc()
{
	int a,i,j;
	int upper=2,lower=0,num;
	int comp=0,player=0;
	char prob[4][10]={"Rock","Paper","Scissors"};


	for(j=0;j<5;j++)
	{
	printf("Game %d:",j+1);
	do
	{
	printf("Enter: \n 1 for rock \n 2 for paper \n 3 for scissors:");
	scanf("%d",&a);
	if(a<1||a>3)
		printf("Please enter appropriate input!\n");
	}while(a<1||a>3);
	printf("Player-1 chose %s\n",prob[a-1]);
	srand(time(NULL));//srand for seeding means generating random variables
	for(i=0;i<1;i++)
	{
		num = (rand() % (upper - lower + 1)) + lower;
		printf("Randomly generated input: %d\n",num);
	}
	printf("Randomly generated input value:%s\n",prob[num]);
	


	if(a-1==num)
	{
		// no points
	}
	else 
	{
		switch(num)
		{
		case 0:	
		 if(a-1 == 1)
			player++;
		 if(a-1 == 2)
			comp++;
		break;
		case 1:
		 if(a-1 == 0)
			comp++;
		 if(a-1 == 2)
			player++;
		break;
		case 2:
      		 if(a-1 == 0)
			player++;	
		 if(a-1 == 1)
			comp++;
		break;
		}
		
	}
	
	printf("Player score = %d\n",player);
	printf("Computer score = %d\n",comp);
	}

	if(player>comp)
		printf("You won! Congratulations!!");
	else if(player<comp)
		printf("You lost! Better luck next time!");
	else
		printf("It's a draw match");
 
	
	return 0;
	
} 