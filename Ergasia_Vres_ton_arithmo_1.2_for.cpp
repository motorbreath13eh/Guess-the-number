#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main()
{
	system("CHCP 1253>nul");
	
	bool flag = false;
	unsigned tyxaios_arithmos, unsigned_arithmou_paixti;
	float arithmos_paixti;
	
	printf("����� ������ ��� �������� \"���� ��� ������\"!!!\n");
	printf("�� ��������� ����� ���� ������ ������ ������� ������ ��� �� 1 ��� �� 1000!\n");
	printf("�������� ������������ �� ����������� ����� ����� � ������� �������!!!\n");
	printf("����� 10 �����������!\n\n");
	
	srand(time(NULL));
	tyxaios_arithmos = 1 + rand()%1000;
	//printf("\n\ntyxaios_arithmos = %d\n\n", tyxaios_arithmos);
	
	printf("�������� ��������������� ��� ������ ������� ������ ��� �� 1 ��� �� 1000!!\n");
	
	for(int i=1; i<=10; i++)
	{
		printf("���������� %d�: ", i);
		scanf("%f", &arithmos_paixti);
		unsigned_arithmou_paixti = (unsigned)arithmos_paixti;
		
		if(unsigned_arithmou_paixti != arithmos_paixti || unsigned_arithmou_paixti<1 || unsigned_arithmou_paixti>1000)
		{
			printf("\a\n�� ������ ������ ������� ������ ��� �� 1 ��� �� 1000!!!\n");
			i--;
		}
		else if (arithmos_paixti==unsigned_arithmou_paixti && unsigned_arithmou_paixti>=1 && unsigned_arithmou_paixti<=1000)
		{
			if(unsigned_arithmou_paixti>tyxaios_arithmos)
			{
				printf(">\n");	
			}
			else if(unsigned_arithmou_paixti<tyxaios_arithmos)
			{
				printf("<\n");
			}
			else if(unsigned_arithmou_paixti==tyxaios_arithmos)
			{
				printf("������\n");
				i = 10;
				flag = true;
			}
		}
		else
		{
			printf("\a\n�� ������ ������ ������� ������ ��� �� 1 ��� �� 1000!!!\n");	
		}	
	}
	
	if(flag == true)
	{
		sleep(1);
	}
	
	else if (flag == false)
	{
		printf("\n�������� �� ������� ��� ������.. :(\n");
		sleep(2);
	}
	
	printf("\n����� ����������!!\n��� ����������� ����!!!\n\n");
	
	system("pause");
	return 0;
}