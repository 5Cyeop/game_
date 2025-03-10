#include "w_upgrade.h"
#include "battle.h"
#include "lobby.h"

int lv = 1;
int cur = 15;
int base = 10;
int wei = 5;
int a = 0;
char* grade[6] = { "normal", "epic", "rare", "unique", "legendary", "ultimate" };
int upgrade_point = 0;
int evolve_point = 0;
int p = 0;


void Upgrade_M()
{
	while (1)
	{
		printf("��ȭ��: %d, ��ȭ��: %d\n", evolve_point, upgrade_point);
		printf("Y.��ȭ�Ѵ� / N.��ȭ�� ����Ѵ� (E. ���� ��ȭ) \n\n");
		p += 1;

		if (p % 5 == 0)
			system("cls");

		char i = _getch();

		if (i == 'Y' || i == 'y')
			W_Upgrade();

		else if (i == 'N' || i == 'n')
		{
			printf("��ȭ�� �����մϴ�.\n");
			break;
		}

		else if (i == 'E' || i == 'e')
		{
			printf("��ȭ�� �����Ϸ��� ��ȭ���� %d�� �Ҹ�˴ϴ�. ���⸦ ��ȭ�Ͻðڽ��ϱ�? Y/N \n", (a * 20));
			char loyal = _getch();
			if (loyal == 'Y' || loyal == 'y')
			{
				if (upgrade_point >= 200)
				{
					upgrade_point -= 200;
					Evolution();
				}

				else if (upgrade_point < 200)
				{
					printf("��ȭ���� �����մϴ�.\n\n");
					Menu();
				}
			}
			else if (loyal == 'N' || loyal == 'n')
			{
				printf("��ȭ�� ����Ͽ����ϴ�.\n\n");
				Upgrade_M();
			}
		}

		else
			printf("Press Y/N\n");
	}
}

void Evolution()
{
	int L_random = rand() % 100 + 1;
	srand(time(NULL));

	if (L_random < 20)
	{
		if (a < 5)
		{
			a += 1;
			base *= (a + 1);
			cur = base + wei * lv;
			printf("��ȭ�� �����Ͽ����ϴ�!!\n");
			printf("���: %s, ����: %d, ���ݷ�: %d\n\n", grade[a], lv, cur);
		}

		else if (a >= 5)
		{
			printf("���Ⱑ �ְ����Դϴ�.\n\n");
		}
	}

	else
	{
		cur = base + wei * lv;
		printf("��ȭ�� �����Ͽ����ϴ�.\n");
		printf("���: %s, ����: %d, ���ݷ�: %d\n\n", grade[a], lv, cur);
	}
}


void W_Upgrade()
{
	int random = rand() % 100 + 1;
	srand(time(NULL));


	if (upgrade_point >= lv * 20)
	{
		printf("��ȭ ������: %d\n", random);
		if (random < 40)
		{
			lv += 1;
			cur = base + wei * lv;
			upgrade_point += (5 * lv);
			printf("��ȭ�� �����Ͽ����ϴ�!!\n");
			printf("���: %s, ����: %d, ���ݷ�: %d\n\n", grade[a], lv, cur);
		}

		else if (random > 40)
		{
			cur = base + wei * lv;
			printf("��ȭ�� �����Ͽ����ϴ�.\n");
			printf("���: %s, ����: %d, ���ݷ�: %d\n\n", grade[a], lv, cur);
			upgrade_point += (10 * lv);
		}

		else
		{
			if (a > 3)
			{
				printf("��ȭ�� �����Ͽ� ���Ⱑ �ı��Ǿ����ϴ�.");
				exit(0);
			}
		}
	}

	else if (upgrade_point < lv * 20)
	{
		printf("��ȭ���� �����մϴ�.\n");
		Menu();
	}
}

