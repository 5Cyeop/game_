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

	printf("%s와 마주쳤습니다. 싸우시겠습니까? Y/N\n\n", monster[random]);
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
		printf("%s가 쓰러졌습니다.\n", monster[random]);
		printf("강화석 %d개, 진화석 %d개를 획득하였습니다.\n", (random + 1) * 1000, (random + 1) * 500);
		upgrade_point += (random + 1) * 1000;
		evolve_point += (random + 1) * 500;
	}

	else if (cur < m_power[random])
	{
		printf("%s의 공격에 의해 사망하였습니다. 부활하시겠습니까? Y/N (부활하지 않을 시 게임이 종료됩니다.) \n", monster[random]);
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