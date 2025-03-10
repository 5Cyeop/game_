#include "battle.h"
#include "w_upgrade.h"
#include "lobby.h"


#define MON_MAX 4 


char* monster[MON_MAX] = { "SLIME", "SKELETON", "DEMON", "DRAGON" };
int m_power[MON_MAX] = { 10, 100, 500, 2000 };
extern int cur;
extern int upgrade_point;
extern int evolve_point;

void M_Battle()
{
	srand(time(NULL));
	int random = rand() % 3 + 1;
	if (cur < 100)
		random = 0;

	printf("%s�� �����ƽ��ϴ�. �ο�ðڽ��ϱ�? Y/N\n\n", monster[random]);
	char a = _getch();

	if (a == 'Y' || a == 'y')
	{
		Battle(random);
	}

	else if (a == 'N' || a == 'n')
	{
		Menu();
	}

}


void Battle(int random)
{

	if (cur > m_power[random])
	{
		printf("%s�� ���������ϴ�.\n", monster[random]);
		printf("��ȭ�� %d��, ��ȭ�� %d���� ȹ���Ͽ����ϴ�.\n", (random + 1) * 1000, (random + 1) * 500);
		upgrade_point += (random + 1) * 1000;
		evolve_point += (random + 1) * 500;
	}

	else if (cur < m_power[random])
	{
		printf("%s�� ���ݿ� ���� ����Ͽ����ϴ�. ��Ȱ�Ͻðڽ��ϱ�? Y/N (��Ȱ���� ���� �� ������ ����˴ϴ�.) \n", monster[random]);
		char respone = _getch();

		if (respone == 'Y' || respone == 'y')
		{
			Menu();
		}

		else if (respone == 'N' || respone == 'n')
		{
			exit(0);
		}
	}

}