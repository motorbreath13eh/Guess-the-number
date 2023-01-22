#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main()
{
	bool flag = true , index = false;
	unsigned tyxaios_arithmos, unsigned_arithmou_paixti, i = 1;
	float arithmos_paixti;
	
	printf("Welcome to the game \"Guess the number\"!!!\n");
	printf("The program randomly chooses a positive integer from 1 to 1000!\n");
	printf("Please try to guess who is the chosen number!!!\n");
	printf("You have 10 tries!\n\n");
	
	srand(time(NULL));
	tyxaios_arithmos = 1 + rand()%1000;
	printf("\n\ntyxaios_arithmos = %d\n\n", tyxaios_arithmos);
	
	printf("Please enter a positive integer from 1 to 1000!!\n");
	do
	{
		printf("%d) ", i);
		scanf("%f", &arithmos_paixti);
		unsigned_arithmou_paixti = (unsigned)arithmos_paixti;
		
		if(unsigned_arithmou_paixti != arithmos_paixti || unsigned_arithmou_paixti<1 || unsigned_arithmou_paixti>1000)
		{
			printf("\a\nYou didn't enter a positive integer from 1 to 1000!!!\n");
		}
		else if (arithmos_paixti==unsigned_arithmou_paixti && unsigned_arithmou_paixti>=1 && unsigned_arithmou_paixti<=1000)
		{
			if(unsigned_arithmou_paixti>tyxaios_arithmos)
			{
				printf(">\n");
				i++;	
			}
			else if(unsigned_arithmou_paixti<tyxaios_arithmos)
			{
				printf("<\n");
				i++;
			}
			else if(unsigned_arithmou_paixti==tyxaios_arithmos)
			{
				printf("Congratulations!! You found it!!!\n");
				flag = false;
				index = true;
			}
		}
		else
		{
			printf("\a\nYou didn't enter a positive number from 1 to 1000!!!\n");	
		}
		
		if(i > 10 ||  flag == false)   flag = false;
		else flag = true;	
	}while(flag != false);
	
	if(index == true)
	{
		sleep(1);
	}
	
	else if (index == false)
	{
		printf("\nUnfortunately, you didn't find the number.. :(\n");
		sleep(2);
	}
	
	printf("\nGame over!!\nPlease, play again in the future!!!\n\n");
	
	system("pause");
	return 0;
}
