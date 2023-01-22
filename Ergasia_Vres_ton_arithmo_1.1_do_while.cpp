#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main()
{
	system("CHCP 1253>nul");
	
	bool flag = true , index = false;
	unsigned tyxaios_arithmos, unsigned_arithmou_paixti, i = 1;
	float arithmos_paixti;
	
	printf("Καλως ήρθατε στο παιχνίδι \"Βρες τον αριθμό\"!!!\n");
	printf("Το πρόγραμμα βάζει έναν τυχαίο θετικό ακέραιο αριθμό από το 1 έως το 1000!\n");
	printf("Παρακαλώ προσπαθείστε να ανακαλύψετε ποιος είναι ο τυχαίος αριθμός!!!\n");
	printf("Έχετε 10 προσπάθειες!\n\n");
	
	srand(time(NULL));
	tyxaios_arithmos = 1 + rand()%1000;
	printf("\n\ntyxaios_arithmos = %d\n\n", tyxaios_arithmos);
	
	printf("Παρακαλώ πληκτρολογείστε ένα θετικό ακέραιο αριθμό από το 1 έως το 1000!!\n");
	do
	{
		printf("Προσπάθεια %dη: ", i);
		scanf("%f", &arithmos_paixti);
		unsigned_arithmou_paixti = (unsigned)arithmos_paixti;
		
		if(unsigned_arithmou_paixti != arithmos_paixti || unsigned_arithmou_paixti<1 || unsigned_arithmou_paixti>1000)
		{
			printf("\a\nΔε δώσατε θετικό ακέραιο αριθμό από το 1 έως το 1000!!!\n");
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
				printf("Μπράβο\n");
				flag = false;
				index = true;
			}
		}
		else
		{
			printf("\a\nΔε δώσατε θετικό ακέραιο αριθμό από το 1 έως το 1000!!!\n");	
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
		printf("\nΔυστυχώς δε βρήκατε τον αριθμό.. :(\n");
		sleep(2);
	}
	
	printf("\nΤέλος παιχνιδιού!!\nΣας περιμένουμε ξανά!!!\n\n");
	
	system("pause");
	return 0;
}
