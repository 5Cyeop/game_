#include "upgrade_shop.h"
#include "w_upgrade.h"
#include "border.h"

void Shop()
{
	printf("�����������������������������������������\n");
	printf("��                                                                            ��\n");
	printf("��                            [PRESS THE BUTTON]                              ��\n");
	printf("��                                                                            ��\n");
	printf("��                            [U] Upgrade Weapon                              ��\n");
	printf("��                                                                            ��\n");
	printf("��                            [Q] Quit Upgrade                                ��\n");
	printf("��                                                                            ��\n");
	printf("��                            [E] Evolve Weapon                               ��\n");
	printf("��                                                                            ��\n");
	printf("��                                                                            ��\n");
	printf("��                                                                            ��\n");
	printf("�����������������������������������������\n");
}

void Select()
{
	char cho = _getch();
	
	if (cho == 'U' || cho == 'u')
	{
		Upgrade_M();
	}

	else if (cho == 'Q' || cho == 'q')
	{
		system("cls");
		Border();
	}

}
