#include "upgrade_shop.h"
#include "w_upgrade.h"
#include "border.h"

void Shop()
{
	printf("กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ\n");
	printf("กแ                                                                            กแ\n");
	printf("กแ                            [PRESS THE BUTTON]                              กแ\n");
	printf("กแ                                                                            กแ\n");
	printf("กแ                            [U] Upgrade Weapon                              กแ\n");
	printf("กแ                                                                            กแ\n");
	printf("กแ                            [Q] Quit Upgrade                                กแ\n");
	printf("กแ                                                                            กแ\n");
	printf("กแ                            [E] Evolve Weapon                               กแ\n");
	printf("กแ                                                                            กแ\n");
	printf("กแ                                                                            กแ\n");
	printf("กแ                                                                            กแ\n");
	printf("กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ\n");
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
