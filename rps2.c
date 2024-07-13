#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
int pvp()
{
	int a,i,j;
	int upper=2,lower=0,b;
	int player2=0,player1=0;
	char prob[4][10]={"Rock","Paper","Scissors"};


	for(j=0;j<5;j++)
	{
	printf("Game %d:",j+1);
	do
	{
	printf("Enter Player1 choice: \n 1 for rock \n 2 for paper \n 3 for scissors:");
	scanf("%d",&a);
	if(a<1||a>3)
		printf("Please enter appropriate input!\n");
	}while(a<1||a>3);
	printf("Player-1 chose %s\n",prob[a-1]);
	do
	{
	printf("Enter Player2 choice: \n 1 for rock \n 2 for paper \n 3 for scissors:");
	scanf("%d",&b);
	if(b<1||b>3)
		printf("Please enter appropriate input!\n");
	}while(b<1||b>3);
	printf("Player-2 chose %s\n",prob[b-1]);


	if(a-1==b-1)
	{
		// no points
	}
	else 
	{
		switch(b-1)
		{
		case 0:	
		 if(a-1 == 1)
			player1++;
		 if(a-1 == 2)
			player2++;
		break;
		case 1:
		 if(a-1 == 0)
			player2++;
		 if(a-1 == 2)
			player1++;
		break;
		case 2:
      		 if(a-1 == 0)
			player1++;	
		 if(a-1 == 1)
			player2++;
		break;
		}
		
	}
	
	printf("Player 1 score = %d\n",player1);
	printf("Player 2 score = %d\n",player2);
	}

	if(player1>player2)
		printf("Player 1 wins!! Congratulations!!");
	else if(player1<player2)
		printf("Player 2 wins!! Congratulations!!");
	else
		printf("It's a draw match");
 
	
	return 0;
	
} 